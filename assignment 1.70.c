#include<stdio.h>
int main()
{
  int n,a,count=0;
  printf("enter number of elements in array :");
  scanf("%d",&n);
  int arr[n],i,k[n];
  printf("enter the elements of the array \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  printf("the elements of the array are: \n");
  for(i=0;i<n;i++)
  {
    printf("%d \t",arr[i]);
  }
  printf("\n enter an value whose occurence should be checked in the array :");
  scanf("%d",&a);
  int flag=0;
  for(i=0;i<n;i++)
  {
      if(arr[i]==a)
      {
        flag=1;
        count++;
      }
  }
  if(flag==1)
  {
    printf("element %d is present %d times in the array",a,count);
  }
  else
  {
    printf("element is not present in the array");
  }
return 0;
}
