#include<stdio.h>
void main()
{
int a[20],i,n;
printf("Enter the array size:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
printf("The array elements are:");
for(i=0;i<n;i++)
{
 printf("\n%d",a[i]);
}
}
