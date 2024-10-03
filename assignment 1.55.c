#include<stdio.h>//program to print sum of all elements,number of elements and number of odd elements of array
int main()
{
  int arr[10],sum=0,count=0,count_=0;
  printf("enter an array element:");
  for(int i=0;i<10;i++)
  {
     scanf("%d",&arr[i]);
     count++;
     sum=sum+arr[i];
     if(arr[i]%2==1)
     {
        count_++;
     }

  }
  printf(" total number of elements in  array is %d \n",count);
  printf("sum of all elements in array is %d \n",sum);
  printf("number of elments which are odd in array are %d \n",count_);


  return 0;
}
