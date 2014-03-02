#include<iostream.h>
#include<conio.h>
template<class t>
class list;
template<class t>
class node{
friend class list<t>;
int data;
node<t> *link;
};
template<class t>
class list{
int len;
node<t> *first;
public:list()
{
 first=NULL;
 len=0;
}
void display();
void insertbeg(t x);
void med(int x);
};
template<class t>
void list<t>::insertbeg(t x)
{
node<t> *temp=new node<t>;
temp->data=x;
temp->link=first;
first=temp;
len++;
}
template<class t>
void list<t>::display()
{
 node<t> *current;
 for(current=first;current!=NULL;current=current->link)
 cout<<current->data;

}
template<class t>
void list<t>::med(int x)
{
 len=x;
 node<t> *temp=first;
 node<t> *p;
  if(len%2==0)
  {

     for(int i=0;i<(len/2);i++)

	    {
	     p=temp;
	     temp=temp->link;
	     }
	     cout<<(temp->data+p->data)/2;

	    }

  else{
       for(int i=0;i<(len/2);i++)
	   temp=temp->link;

	   cout<<temp->data<<"\n";
	   }

}
void main()
{

 list <int> l;
 int i,n,val;
 clrscr();
 cout<<"enter no f num"<<"\n";
   cin>>n;
   cout<<"enter numbrs in sorted order"<<"\n";

for(i=0;i<n;i++)
{
 cin>>val;
 l.insertbeg(val);

}
 l.display();
 l.med(n);

  getch();
}


