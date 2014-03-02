#include<iostream.h>
#include<conio.h>
template<class t>
class list;
template<class t>
class node{
friend class list <t>;
private:long int data;
node<t> *link;
};
template<class t>
class list{
int len;

node<t> *first;
public:list(){
first=NULL;
len=0;
}
void insertbeg(long int x);
void display();
};
template<class t>
void list<t>::insertbeg(long int x)
{
node<t> *temp=new node<t>;
temp->data=x;
temp->link=first;
first=temp;
len++;

}
template<class t>
void list <t>::display()
{
node<t> *current;
for(current=first;current!=NULL;current=current->link)
cout<<current->data<<"->";
cout<<"\n";
}

void main()
{
list <int> l;
long int a,rem;
cout<<"enter a num"<<"\n";
cin>>a;
while(a!=0)
{
rem=a%10;
l.insertbeg(rem);
a=a/10;
}
l.display();

getch();
}

