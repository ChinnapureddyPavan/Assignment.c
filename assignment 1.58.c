#include<stdio.h>
int main()
{
  int n,i;
  printf("enter number of elements that should be present in array \n ");
  scanf("%d",&n);
  int arr1[n],arr2[n],arr3[n];
  printf("enter the elements of array 1: \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr1[i]);
  }
  printf("enter the elements of arr 2: \n ");
   for(i=0;i<n;i++)
  {
    scanf("%d",&arr2[i]);
  }
  printf("elements of 1st array are : ");
  for(i=0;i<n;i++)
  {
      printf("%d ",arr1[i]);
  }
  printf("\n");
  printf("elements of 2nd array are : ");
    for(i=0;i<n;i++)
  {
      printf("%d ",arr2[i]);
  }
  printf("\n");
  printf("elemnts of third array are:");
  for(i=0;i<n;i++)
  {
  arr3[i]=arr1[i]+arr2[i];
  printf("%d ",arr3[i]);
  }
  return 0;
}
