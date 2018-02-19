#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
char a[20];
clrscr();
printf("\n enter the string and number\t");
scanf("%s%d",a,&n);
for(i=0;i<n;i++)
{
printf("%s\n",a);
}
getch();
}
