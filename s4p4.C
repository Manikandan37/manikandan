#include <stdio.h>
#include<string.h>
void main()
{
char str[25];
int l=strlen(str);
int count=1,i;
clrscr();
printf("\n enter the string");
scanf("%s",str);
for(i=0;i<=l;i++)
{
if(str[i]=='.')
{
count=count+1;
}
}
printf("The total no of lines in the paragraph are %d",count);
getch();
}
