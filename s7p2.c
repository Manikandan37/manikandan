#include<stdio.h>
#include<conio.h>
void main()
{
char  n[10];
int t,i;
clrscr();
printf("Enter a   string:");
scanf("%s",n);
t=strlen(n);
for(i=0;i<t;i++)
{
if(n[i]=='0'||n[i]=='1')
{
t++;
}
}
if(t>0)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}

