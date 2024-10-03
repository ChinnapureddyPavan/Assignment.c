#include<stdio.h>//program to print number of positive elements,number of negative elements and number of  elements which are zero  array
int main()
{
  int arr[10],count=0,count_=0,count__=0;
  printf("enter an array element:");
  for(int i=0;i<10;i++)
  {
    scanf("%d",&arr[i]);
    if(arr[i]>0)
    {
      count++;
    }
    else if(arr[i]<0)
    {
      count_++;
    }
    else if(arr[i]==0)
    {
      count__++;
    }
  }
  printf(" total number of  positive elements in  array is %d \n",count);

    printf(" total number of  negative elements in  array is %d \n",count_);

      printf(" total number of  elements which are zero in  array is %d \n",count__);

  return 0;
}
