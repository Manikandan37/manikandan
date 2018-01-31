#include<stdio.h>
#include<conio.h>
void main()
{

int a,b,rem,i;
printf("   First number for the Range:\n");
scanf("%d",&a);
printf("  Final number for the Range:\n");
scanf("%d",&b);
printf("\n The Even numbers between %d and %d are",a,b);
for(i=a;i<=b;++i)
{
rem=i%2;
if(rem==0)
printf("\n  %d",i);
}
getch();
}
