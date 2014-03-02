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
void rev();
void display();
};
template<class t>
void list<t>::insert(t x)

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
    cout<<current->data<<"->";
    cout<<"\n";

   }
   template<class t>
   void list<t>::rev()
   {
	node<t> *p=first;
	node<t> *q=NULL;
	node<t> *r;
	while(p!=NULL)
	{
	 r=q;
	 q=p;
	 p=p->link;
	 q->link=r;
	 }
	 first=q;

	}


void main()
{
list <int> l;
clrscr();
long int a,rem;
cout<<"enter a num"<<"\n";
cin>>a;
while(a!=0)
{
rem=a%10;
l.insert(rem);
a=a/10;
}

l.display();
l.rev();
l.display();
getch();
}


