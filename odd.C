#include <stdio.h>
#include<conio.h>
void main()
{
int n,a,b;
clrscr();
printf("\n enter the a and b values");
scanf("%d%d",&a,&b);
for(n=a;n<=b;n++)
{
if(n%2==1)
printf("%d ",n);
}
getch();
}
