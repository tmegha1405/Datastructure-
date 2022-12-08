#include<stdio.h>
void main()
{
int a1[50],a2[50],a3[100],m,n,i,j,k=0;
printf("Enter size of first array:");
scanf("%d",&m);
printf("\n Enter elements of first array(sorted order):");
for(i=0;i<m;i++)
{
scanf("%d",&a1[i]);
}
printf("Enter size of second array:");
scanf("%d",&n);
printf("Enter elements of second array(sorted order):");
for(j=0;j<n;j++)
{
scanf("%d",&a2[j]);
}
i=0;
j=0;
while(i<m&&j<n)
{
if(a1[i]<a2[j])
{
a3[k]=a1[i];
i++;
}
else
{
a3[k]=a2[j];
j++;
}
k++;
}
if(i>=m)
{
while(j<n)
{
a3[k]=a2[j];
j++;
k++;
}
}
if(j>=n)
{
while(i<m)
{
a3[k]=a1[i];
i++;
k++;
}
}
printf("\n After merging:\n");
for(i=0;i<m+n;i++)
{
printf("\n%d",a3[i]);
}
}
