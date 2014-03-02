#include<iostream.h>
#include<conio.h>
class list{
private:struct node{
	int data;
	node *link;


}*p;
public:int len;
public:list()
{
 p=NULL;
 len=0;
}
  void insert(int x);
 void display();
 void destroy(int x);

};
void list::display()
{
node *temp;
 for(temp=p;temp!=NULL;temp=temp->link)
 cout<<temp->data<<"\t";
cout<<"len:"<<len;


}
void list::destroy(int x)

{
node *q=p;
node *r,*s;
int index=len-x;
 for(int i=0;i<index;i++)
 {
 s=q;
 q=q->link;

}
 s->link=NULL;
 q->link=NULL;
 while(q!=NULL)
 {
   r=q;
   r=r->link;
   delete q;
   q=r;
 }
len=index;

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
  len++;
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
  len++;
 }

}

void main()
{
list l1;
int n1,i,val;
clrscr();

cout<<"no f ele in list"<<"\n";
cin>>n1;
cout<<"Enter ele in list"<<"\n";
for(i=0;i<n1;i++)
{
 cin>>val;
 l1.insert(val);
}
l1.display();
cout<<"enter index to del" <<"\n";
cin>>i;

l1.destroy(i);
l1.display();
getch();

}