#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,temp;
clrscr();
printf("\n enter the value for a:");
scanf("%d",&a);
printf("\n enter the value for b:");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("\n  swap a:%d",a);
printf("\n swap b%d",b);
getch();
}
