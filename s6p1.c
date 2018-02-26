#include<stdio.h>
#include<conio.h>
void main()
{
int n,t,rem=0,i;
clrscr();
printf("\n Enter the number");
scanf("%d",&n);
while(n!=0)
{
t=n%10;
rem=(rem*10)+t;
n=n/10;
}
while(rem!=0)
{
i=rem%10;
rem=rem/10;
printf("%d\t",i);
}
getch();
}
