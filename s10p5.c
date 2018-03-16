#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  float p,t,r,s;
  clrscr();
  printf("Enter p t and r value:");
  scanf("%f%f%f",&p,&t,&r);
  s=(p*t*r)/100;
  printf(" interest is %f",floor(s));
  getch();
}
