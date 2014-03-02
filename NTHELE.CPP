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
void display(int x);
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
 void list<t>::display(int x)
{
   node<t> *current,*p;
    for(current=first;current!=NULL;current=current->link)
    cout<<current->data<<"->";
    int index=len-x;
    p=first;
    for(int i=0;i<index;i++)
    {
    p=p->link;

    }

   cout<<"nth fromlast"<<p->data<<"\n";
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
cout<<"enter nth index"<<"\n";
cin>>index;
l.display(index);
getch();
}


