#include <stdio.h>
#include <conio.h>
void  main()
{
 int ba,ex,i,res=1;
 clrscr();
 printf("Enter base and exponent \n");
 scanf("%d%d",&ba,&ex);
 for(i=0;i<ex;i++)
 {
 res=res*ba;
 }
  printf("%d^%d=%d",ba,ex,res);
  getch();
 }
