#include<stdio.h>
#include<conio.h>
void main()
{
int array[100],min,size,i;
printf("Enter the number of elements in array\n");
scanf("%d",&size);
printf("Enter %d integers\n",size);
for (i=0;i<size;i++)
scanf("%d",&array[i]);
min=array[0];
for(i=1;i<size;i++)
{
if(array[i]<min)
{
min=array[i];
}
}
printf("Minimum element value is%d",min);
getch();
}
