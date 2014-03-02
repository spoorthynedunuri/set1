#include<iostream.h>
#include<conio.h>
template<class t>
class list;
template<class t>
class node{
friend class list<t>;
private:int data;
node<t> *link;
};
template<class t>
class list{
private:int len;
node<t> *head,*first;
public:list()
{
 len=0;
 first=NULL;
 head=head->link;
}
void insert(int x);
void convert();
void displaysli();
void displaycir();
} ;
template<class t>
void list<t>::insert(int x)
{
 node<t> *l=new node<t>;
 l->data=x;
  node<t> *p;
  if(first==NULL)
  {

   l->link=NULL;
   first=l;
   len++;

  }
 else
 {
  p=first;
  while(p->link!=NULL)
  {
   p=p->link;
   }
   p->link=l;
  l->link=NULL;
  len++;


  }
}
template<class t>
void list<t>::convert()
{

 head->link=first;
 node<t> *current=head->link;
 while(current->link!=NULL)
 current=current->link;
    current->link=head;


}
template<class t>
void list<t>::displaycir()
{
len=len+1;
 node<t> *current=head->link;

 while(current!=head)
 {


  cout<<current->data<<"->";
 current=current->link;



  }
  cout<<first->data;
}
template<class t>
void list<t>::displaysli()
{
node<t> *curr;
 for(curr=first;curr!=NULL;curr=curr->link)
 cout<<curr->data<<"->";

}
void main()
{
 list<int> l;
 int i,n,val;
 clrscr();
 cout<<"entr n f el"<<"\n";
 cin>>n;
 cout<<"entr ele"<<"\n"  ;
 for(i=0;i<n;i++)
 {
  cin>>val;
  l.insert(val);



}
cout<<"ele in sigle list\n";
 l.displaysli();
 l.convert();
 cout<<"ele in circular list\n";
 l.displaycir();
 getch();
}