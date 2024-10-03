#include<stdio.h>
int main()
{
int i,j,n;
printf("enter maximum number of stars which can be present in a row");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(i%2==1)
   {
for(j=1;j<=n-i;j++)
     {
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("* ");
}
}
else
{
    printf("\n");
}
printf("\n");
}
for(i=n-1;i>=1;i--)
{
if(i%2==1)
{
for(j=1;j<=i;j++)
{
printf("* ");
}
}
else
{
    printf("\n");
}
printf("\n");
}
return 0;
}
