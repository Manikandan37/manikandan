#include <stdio.h>
#include<conio.h>
void main() 
{
 int a,b,i,d;
 clrscr();
 printf("Enter two numbers(intervals): ");
 scanf("%d %d",&a,&b);
 printf("Prime numbers between %d and %d are:",a,b);
 while(a<b)
 {
 d=0;
 for(i=2;i<=a/2;++i)
 {
 if(a%i==0)
 {
 d=1;
 break;
 }
 }
 if(d==0)
 printf("%d",a);
 ++a;
 }
 getch();
}
