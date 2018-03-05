#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10],a1[10];
int l;
clrscr();
printf("\n Enter the string\t");
scanf("%s",a);
strcpy(a1,a);
strrev(a);
l=strcmp(a,a1);
if(l==0)
printf("yes");
else
printf("no");
getch();
}
