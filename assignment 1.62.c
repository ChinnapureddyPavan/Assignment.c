#include<stdio.h>//program to reverse an array
int main()
{
  int n,i;
  printf("enter number of elements that should be present in array :");
  scanf("%d",&n);
  int arr[n];
  printf("enter elements of the array :");
  for(i=0;i<n;i++)
  {
    scanf("%d ",&arr[i]);
  }
  printf("elements of the array at the start are:");
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
  printf("elements of the array after swapping are:");
  for(i=0;i<n;i++)
  {
     printf("%d ",arr[n-i-1]);
  }
return 0;
}
