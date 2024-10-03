#include<stdio.h>//program to swap elements of two arrays
int main()
{
  int n,i;
  printf("enter number of elements that should be present in array  ");
  scanf("%d",&n);
  int arr1[n],arr2[n],temp[n];
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
  for(i=0;i<n;i++)
  {
    temp[i]=arr1[i];
    arr1[i]=arr2[i];
    arr2[i]=temp[i];
  }
  printf("\n");
  printf("after swapping");
  printf("\n");
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
  return 0;
  }
