#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10];
int l,i,v=0;
clrscr();
printf("\n Enter the string\t");
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
v=v+1;
printf("%dyes",v);
else
printf("%dno",v);
getch();
}
