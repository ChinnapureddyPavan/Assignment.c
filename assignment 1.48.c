#include<stdio.h>//program to print number pattern in reverse
int main(){
int i,j,rows;
printf("enter number of rows:");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
for(j=1;j<=rows-i;j++)
{
printf(" ");
}
for(j=1;j<=i;j++)
{
printf("%d",j);
}
printf("\n");
}
return 0;
}