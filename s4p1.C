#include<stdio.h>
#include<string.h>
void main()
{
int s;
char a[50]="tamil and science";
clrscr();
s=strlen(a)-strlen("\t\t");
printf("%d",s);
getch();
}
