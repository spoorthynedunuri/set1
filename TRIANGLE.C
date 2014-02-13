#include<stdio.h>
#include<conio.h>
#include<math.h>
float a,b,c;
float length(int,int,int,int);
int main()
{
int x1,x2,x3,y1,y2,y3;
clrscr();
printf("enter x1 coordinate");
scanf("%d",&x1);
scanf("%d",&y1);
printf("enter the x2 coordinate");
scanf("%d",&x2);
scanf("%d",&y2);
printf("enter the x3 coordinate");
scanf("%d",&x3);
scanf("%d",&y3 );
a= length(x1,y1,x2,y2);
b= length(x2,y2,x3,y3);
c= length(x3,y3,x1,y1);
//printf("%f\t%f\t%f",a,b,c);
if(a>b&&a>c)
{
    if(a>(b+c))
	{
	printf("cannot form a triangle");
	return 0;
	}
}
else if(b>c&&b>a)
{
if(b>(a+c))
	{
	printf("cannot form a triangle");
	return 0;
	}
}
else
{
if(c>(a+b))
{
printf("cannot form a triangle") ;
	return 0;
}
}
if((a==b)&&(b==c))
{

    if(isright())
    printf("it is right angle  equilateral\n");
    else
    printf("equilateral triangle");

}
else if((a==b)|(a==c)|(b==c))
{
    if(isright())
    printf("it is right  angle isoceles\n");
    else
printf("isoscles triangle");

}
else     {
if(isright())
    printf("it is scalene right angle\n");
    else
printf("scalene triangle");

}
getch();
return 0;
}
float length(int p,int q,int r,int s)
{
float d;
d= sqrt(((p-r)*(p-r))+((q-s)*(q-s)));
printf("%f\t",d);
return d;
}
int isright()
{        int a1,b1,c1;
   a=ceil(a*a);
   b=ceil(b*b);
   c=ceil(c*c);
      a1=(int)a;
     b1=(int)b;
     c1=(int)c;
  if( (a1==(b1+c1))||(b1==(c1+a1))||(c1==(a1+b1)) )
  return 1;
  else
  return 0;
}