#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,t;
printf("\n Enter the a,b values\t");
scanf("%d%d",&a,&b);
t=a;
a=b;
b=t;
printf("\n%d %d",a,b);
getch();
}
