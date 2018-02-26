#include<stdio.h>
#include<conio.h>
void main()
{
int n,a;
clrscr();
printf("Enter the number");
scanf("%d",&n);
a=n-1;
if(a%2==0)
{
printf("%d",a);
}
else
{
printf("%d",a-1);
}
getch();
}
