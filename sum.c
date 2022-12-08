#include<stdio.h>
int sum(int x,int y);
void main()
{
int a,b,total;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
total=sum(a,b);
printf("The sum is %d",total);
}
int sum(int x,int y)
{
int z;
z=x+y;
return(z);
}
