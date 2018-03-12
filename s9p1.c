#include <stdio.h>
#include<conio.h>
void main() 
{
 int a,b,i;
 clrscr();
 printf("\n enter the a and b values");
  for(i=0;i<3;i++)
 {
 scanf("%d %d",&a,&b);
  if(a>b)
   printf("%d",a-b);
   else
   printf("%d",b-a);
 }
  getch();
}
