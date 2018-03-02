#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int b,i;
clrscr();
printf("\n Enter the   string and number");
scanf("%s%d",a,&b);
for(i=0;i<b;i++)
{
printf("%c",a[i]);
}
getch();
}
