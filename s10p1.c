#include<stdio.h>
#include<conio.h>
void main()
{
  int l,w,h,a,t;
  clrscr();
  printf("enter l,w and b:");
  scanf("%d\t%d\t%d",&l,&w,&h);
  a=(2*l*w)+(2*l*h)+(2*h*w);
  printf("Area is %d",a);
  t=l*w*h;
  printf("Volume is %d",t);
  getch();
}
