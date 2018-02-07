#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter the Number");
scanf("%d",&a);
if(a==0)
printf("no is zero");
else if(a>=1)
printf("no is positive");
else
printf("no is negative");
getch();
}
