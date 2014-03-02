#include<iostream.h>
#include<conio.h>
class list{
private:struct node{
	int data;
	node *link;


}*p;
public:list()
{
 p=NULL;
}
  void insert(int x);
 void display();
  void merge(list &l1,list &l2);
};
void list::display()
{
node *temp;
 for(temp=p;temp!=NULL;temp=temp->link)
 cout<<temp->data<<"\t";


}

void list::insert(int x)
{
 node *l=new node;
 node *q;
 if(p==NULL)
 {
  l->data=x;
  l->link=NULL;
  p=l;

 }
 else{

  q=p;
  while(q->link!=NULL)
  {
   q=q->link;
  }
 q->link=l;
 l->data=x;
 l->link=NULL;

 }

}
void list::merge(list &l1,list &l2)
{
 node *z;
 z=NULL;
 if(l1.p==NULL&&l2.p==NULL)
 return ;
 while(l1.p!=NULL&&l2.p!=NULL)
 {
 if(p==NULL)

 {
	    p=new node;
	    z=p;


 }

 else{

  z->link=new node;
  z=z->link;
  }
   if(l1.p->data<l2.p->data)
   {
   z ->data=l1.p->data;
   l1.p=l1.p->link;
   }
   else{
   if(l2.p->data<l1.p->data)
   {
   z->data=l2.p->data;
   l2.p=l2.p->link;
   }
   else
   {
   if(l1.p->data==l2.p->data)
   {
    z->data=l2.p->data;
    l1.p=l1.p->link;
    l2.p=l2.p->link;
    }
    }
    }
    }
    while(l1.p!=NULL)
    {
    z->link=new node;
    z=z->link;
    z->data=l1.p->data;
    l1.p=l1.p->link;
    }
     while(l2.p!=NULL)
    {
    z->link=new node;
    z=z->link;
    z->data=l2.p->data;
    l2.p=l2.p->link;
    }
    z->link=NULL;

   }


void main()
{
list l1,l2,l3;
int n1,i,val,n2;
clrscr();

cout<<"no f ele in list1"<<"\n";
cin>>n1;
cout<<"Enter ele in list1"<<"\n";
for(i=0;i<n1;i++)
{
 cin>>val;
 l1.insert(val);
}
l1.display();
cout<<"no f ele in list2"<<"\n";
cin>>n2;
cout<<"enter  list2"<<"\n";
for(i=0;i<n2;i++)
{
 cin>>val;
 l2.insert(val);

}
l2.display();
cout<"merge"<<"\n";
l3.merge(l1,l2);
l3.display();

getch();

}