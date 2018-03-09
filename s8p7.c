#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
  int num,i;
  clrscr();
  printf("Enter the number");
  scanf("%d",&num);
  for(i=1;i<=num;i++)
  {
    if(num%i==0)
    {
      printf("%d\n",i);
    }
  }
getch();
}
