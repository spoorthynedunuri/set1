#include<stdio.h>
#include<conio.h>
#include<iostream.h>
template<class t>
class list;
template<class t>
class node
{
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
void insert(t x);
void display();
int del(int x);
};
template<class t>
void list<t>::insert(t x)

{
  node<t> *temp=new node<t>;
  temp->data=x;
  if(first==NULL)
  {
  temp->link=NULL;
  first=temp;
  len++;
  }
  else{
   node<t> *p;
   p=first;
   while(p->link!=NULL)
   {
    p=p->link;
   }
   p->link=temp;
   temp->link=NULL;
   len++;
  }

   }
   template<class t>
   int list<t>::del(int x)
   {
    node<t> *p=first;
    node<t> *q;
    int flag=0;
    while(p!=NULL)
    {

    if(p->data==x)
    {

	flag=1;
	q->link=p->link;
	delete p;
	len--;
	return 1;

    }
    q=p;
    p=p->link;


   }

if(flag==0)
cout<<"val does nt exist"<<"\n";
return 0;
   }

 template<class t>
 void list<t>::display()
{
   node<t> *current;
    for(current=first;current!=NULL;current=current->link)
    cout<<current->data<<"->";

   }



void main()
{
list <int> l;
clrscr();
 int i,a,n,index;
cout<<"enter  num f"<<"\n";
cin>>n;

cout<<"entr valus"<<"\n";
for(i=0;i<n;i++)
{
 cin>>a;
 l.insert(a);
}
cout<<"enter val to del"<<"\n";
cin>>index;
l.del(index);
l.display();
getch();
}


