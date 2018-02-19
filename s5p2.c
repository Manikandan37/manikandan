#include<stdio.h>
#include<conio.h>
void main()
{
char s1[20],s2[20];
int i;
clrscr();
printf("\n enter the two string\t");
scanf("%s%s",s1,s2);
if(s1==s2)
printf("\n %s",s1);
else if(strlen(s1)>strlen(s2))
printf("\n %s",s1);
else
printf("\n %s",s2);
getch();
}
