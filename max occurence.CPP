#include<iostream.h>
#include<conio.h>
class arr{
public: int len,*p,count;
public: arr(int s)
 {
  p=new int[s];
  len=s;
  count=1;
 }
void input();
void cal();
void sort();
};
void arr::sort()
{
int temp;
 for(int i=0;i<len-1;i++)
 {
   for(int j=0;j<len-i-1;j++)
   {
      if(p[j]>p[j+1])
      {
	 temp=p[j];
	 p[j]=p[j+1];
	 p[j+1]=temp;

	 }
	 }
	 }


}



void arr::input()
{
  for(int i=0;i<len;i++)
  cin>>p[i];

}
void arr::cal()
{
int num,maxcount=0;


   for(int i=1;i<len;i++)
   {
     if(p[i-1]==p[i])
     {
     count++;
     if(maxcount<count)
     {
     maxcount=count;
     num=p[i];
     }
     }
     else
     count=1;

   }
   cout<<"max no of times occured"<<maxcount<<"\t"<<"number occured"<<num<<"\n";
   }
void main()
{
int n;
cout<<"enter sz f array"<<"\n";
cin>>n;
 arr obj(n);
 clrscr();
 cout<<"enter arr ele ranging from 0 to 99" <<"\n";
 obj.input();
 obj.sort();
 obj.cal();
 getch();

}