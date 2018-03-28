#include<stdio.h>
void main()
{
   int n,rev,rem;
   scanf("%d",&n);
   while(n)
   {
    rem=n%10;
        rev=rev*10+rem;
        n/=10;
   }
   printf("%d", rev);
}
