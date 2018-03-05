#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("\n Enter the  a and b values");
scanf("%d%d",&a,&b);
c=a-b;
if(c%2==0)
printf("\n EVEN");
else
printf("\n ODD");
getch();
}
