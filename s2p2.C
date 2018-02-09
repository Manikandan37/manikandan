#include <stdio.h>
#include<conio.h>
void main()
{
int n,rev=0,remain,orig;
 clrscr();
printf("Enter an integer: ");
scanf("%d",&n);
orig=n;
while(n!=0 )
{
 remain=n%10;
 rev=rev*10+remain;
 n/= 10;
}
if(orig==rev)
printf("%d is a palindrome.",orig);
else
printf("%d is not a palindrome.",orig);
getch();
}
