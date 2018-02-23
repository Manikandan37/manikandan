#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,s=0,avg,b;
clrscr();
printf("\n Enter the element\t");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("\n%d",&b);
s=s+b;
}
avg=s/n;
printf("\n %d",avg);
getch();
}
