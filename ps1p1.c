#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 int l,i;
 char a[20];
 printf("\n enter the string");
 scanf("%s",a);
 l=strlen(a);
 for(i=l-1;i>=0;i--)
 {
 	printf("%c",a[i]);
	 }	
getch();
}
