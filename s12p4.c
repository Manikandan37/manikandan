#include <stdio.h>
#include<conio.h>
void main()
{
   int a[10],n,k,count=0,i;
   printf("\n enter the n and k values");
   scanf("%d %d",&n,&k);
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(a[i]%2!=0)
       count++;
   
   if(count==k)
   {
   printf("%d",a[i]);
   break;
   }
   }
    getch();
}
