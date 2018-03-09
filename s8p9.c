#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
  int num1,num2,i,count=0;
  clrscr();
  printf("Enter the number");
  scanf("%d\t%d",&num1,&num2);
  i=num1*num2;
 if(sqrt(i)==num1&&sqrt(i)==num2)
 {
   printf("YES");
 }
 else
 {
   printf("NO");
   getch();
 }
}
