#include<iostream.h>
#include<conio.h>
class arr{
public:int *ele1,*ele2,*ele3,*f;
public:int sz1,sz2,sz3;
public:arr(int x,int y)
{
sz1=x;
sz2=y;
sz3=x+y;
ele1=new int[sz1];
ele2=new int[sz2];
ele3=new int[sz3];
f=new int[sz3];
}
int input() ;
void dis();

void merge(int,int,int);
};
void arr::dis()
{
cout<<"display"<<"\n";
for(int i=0;i<sz3;i++)
cout<<f[i]<<"\t";
int mid=sz3/2;
if((sz3%2)!=0)
{
cout<<"median:"<<ele3[mid]<<"\n";
}
else
{
 int mid1=(sz3-1)/2;
 mid1=(ele3[mid]+ele3[mid1])/2;
 cout<<"median:"<<mid1<<"\n";

}



}


int arr::input()

{
int j;
 cout<<"enter first arr ele"<<"\n";
for(int i=0;i<sz1;i++)
{
cin>>ele1[i];
ele3[i]=ele1[i];
}
cout<<"enter sec arr ele"<<"\n";
for( i=0;i<sz2;i++)
cin>>ele2[i];
for( i=sz1,j=0;i<sz3;i++)
{
ele3[i]=ele2[j];
j++;
}
for( i=0;i<sz3;i++)
cout<<ele3[i]<<"\t";
return sz3;
}
void arr::merge(int x,int y,int z)
{
cout<<"hello"<<"\n";
int p,q,r,s;
p=x,q=x,r=y+1,s=z;
while((p<=y)&&(r<=z))
{
	if(ele3[p]<=ele3[r])
	{
	     f[q]=ele3[p];
	     p=p+1;
	}
	else
	{   f[q]=ele3[r];
	     r=r+1;


	}
	q=q+1;
	}
	if(p>y)
	{
	 for(int k=r;k<=z;k++)
	 {
	 f[q]=ele3[k];
	 q=q+1;
	 }
	}
	 else
	 {
	  for(int k=p;k<=y;k++)
	  {
	  f[q]=ele3[k];
	  q=q+1;
	  }
	 }
	 for(int k=0;k<=s;k++)
	   ele3[k]=f[k];

}
void main()
{
int mid,sz3,n1,n2;
clrscr();
cout<<"enter size of first arr"<<"\n";

cin>>n1;
cout<<"enter size of sec array"<<"\n";
cin>>n2;
arr obj(n1,n2);
sz3=obj.input();
mid=sz3/2;
//cout<<sz3<<"sz2 val"<<"\n";
mid=n1-1;
obj.merge(0,mid,sz3-1);
obj.dis();
getch();
}


