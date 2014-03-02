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
 node<t> *first,*head;
public:list()
{
 first=NULL;
 len=0;
  head=head->link;
}
void insert(t x);
void display();
int insertnew(int x);
};
template<class t>
void list<t>::insert(t x)

{
 node<t> *p=new node<t>;
if(len==0)
{

 p->data=x;
 p->link=head->link;

 head->link=p;
 len++;

}

else
{
  node<t> *curr;
  curr=head->link;
  while(curr->link!=head)
  curr=curr->link;
  p->data=x;
  p->link=curr->link;
  curr->link=p;
len++;
}

   }
   template<class t>
   int list<t>::insertnew(int x)
   {
    node<t> *p=head->link;
    node<t> *q;
    while(p!=head)
    {
     if(p->data==x)
     {
     cout<<"already exists"<<"\n";
     return 0;
     }
     else if(p->data<x)
     {q=p;
     p=p->link;
     }
      else{
       node<t> *r=new node<t>;
       r->data=x;
       r->link=q->link;
       q->link=r;
       len++;
	return 1;

      }

    }


   }

 template<class t>
 void list<t>::display()
{
   node<t> *current;
    for(current=head->link;current!=head;current=current->link)
    cout<<current->data<<"->";
    cout<<"len"<<len;
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
cout<<"before" <<"\n";
l.display();

cout<<"enter val to insert"<<"\n";
cin>>index;
l.insertnew(index);
cout<<"after"<<"\n";
l.display();
getch();
}


