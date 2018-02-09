#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,remain,result=0;
clrscr();
printf("Enter a three digit integer: ");
scanf("%d",&n);
a=n;
while(a!=0)
{
remain=a%10;
result+=remain*remain*remain;
a/=10;
}
if(result==n)
printf("%d yes ",n);
else
printf("%d no.",n);
getch();
}
