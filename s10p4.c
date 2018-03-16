#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int n,i,a[20],k;
clrscr();
printf("\n Enter the n and k number ");
scanf("%d%d",&n,&k);
for(i=1;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
if(i==k)
{
printf("%d",a[i]);
}
}
getch();
}
