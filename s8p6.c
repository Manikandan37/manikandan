#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,c=0;
clrscr();
printf("enter the number");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
{
c++;
}
}
if(c==2)
{
printf("no");
}
else
{
printf("yes");
}
getch();
}
