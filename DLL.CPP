#include<iostream.h>
#include<conio.h>
template<class t>
class dlist;
template<class t>
class node{
friend class dlist<t>;
public:t data;
node<t> *rlink,*llink;
};
template<class t>
class dlist{
int len;
node<t> *first,*rlink,*llink;
public:dlist()
{
len=0;
 rlink=NULL;
 llink=NULL;
 first=NULL;
}
  void insert(int x);
  void display(int x);



};
template<class t>
void dlist<t>::insert(int x)
{
 node<t> *r=new node<t>;
 if(first==NULL)
 {

  r->data=x;
  r->rlink=NULL;
  r->llink=NULL;
  first=r;
  }
else{
 node<t> *temp;
 temp=first;
 while(temp->rlink!=NULL)
 {

     temp=temp->rlink;

 }
r->data=x;
temp->rlink=r;
r->llink=temp;
r->rlink=NULL;
}
len++;
}

template<class t>
void dlist<t>::display(int x)
{
node<t> *current=first;
 //for(current=first;current!=NULL;current=current->rlink)
// cout<<current->data<<"\n";
 int mid=x;
 for(int i=0;i<mid;i++)
 current=current->rrlink;
 cout<<current->data<<"\n";


}
void main()
{

 dlist<int> d;
 int i,mid,n,val;
 cout<<"enter no f el"<<"\n"     ;
 cin>>n;
 cout<<"enter ele"<<"\n";
 for(i=0;i<n;i++)
 {
  cin>>val;
  d.insert(val);
 }
mid=n/2;
cout<<"mid is"<<"\n";
d.display(mid);
getch();
}