#include<stdio.h>
int main()
{
  float arr[10],sum=0;
  printf("enter an array element:");
  for(int i=0;i<10;i++)
  {
     scanf("%f",&arr[i]);
     sum=sum+arr[i];
  }
  printf("%f",sum);
  return 0;
}
