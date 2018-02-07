#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,m=0;
clrscr();
printf("Enter the Range:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
m=m+i;
}
printf("The sum of Numbers between the range 0 to %d is: %d",n,m);
getch();
}
