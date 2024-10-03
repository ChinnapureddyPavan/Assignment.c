#include<stdio.h>
int main()
{
  int n;
  float max1=0,max2=0;
  printf("enter number of elements to present in array :");
  scanf("%d",&n);
  float arr[n];
  printf("enter an array element:");
  for(int i=0;i<n;i++)
  {
     scanf("%f",&arr[i]);
     if(arr[i]>max1)
     {
       max2=max1;
       max1=arr[i];
     }
     else if(arr[i]<max1 && arr[i]>max2)
     {
     max2=arr[i];
     }
  }
  printf(" maximum number in array elements %f \n",max1);
  printf("second maximum number in array elemenets is %f",max2);
  return 0;
}
