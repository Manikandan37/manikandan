#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a=0,b=1,c;
clrscr();
printf("Enter a   number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d",a);
c=a+b;
a=b;
b=c;
}
getch();
}

