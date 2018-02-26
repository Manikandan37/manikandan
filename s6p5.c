#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,s;
clrscr();
printf("Enter the two numbers a and b");
scanf("%d\t%d",&a,&b);
s=a*b;
if(s%2==0)
{
printf(" even");
}
else
{
printf(" odd");
}
getch();
}
