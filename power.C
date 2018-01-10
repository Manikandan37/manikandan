#include <stdio.h>
#include <conio.h>
void  main()
{
 int ba,ex,i,result=1;
 clrscr();
 printf("Enter base and exponent \n");
 scanf("%d%d",&ba,&ex);
 for(i=0;i<ex;i++)
 {
 result=result*ba;
 }
  printf("%d^%d=%d",ba,ex,result);
  getch();
 }
