#include<stdio.h>//program to perform linear search on array
int main()
{
  int n,a;
  printf("enter number of elements in array :");
  scanf("%d",&n);
  int arr[n],i,pos[n];
  for(i=0;i<n;i++)
  {
      pos[i]=0;
  }
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
  printf("\n enter an value to be performed in linear search in array: ");
  scanf("%d",&a);
  int flag;
  for(i=0;i<n;i++)
  {
      if(arr[i]==a)
      {
        flag=1;
        pos[i]=i+1;
      }
  }
  if(flag==1)
  {
    printf("element %d is present at position ",a);
      for(i=0;i<n;i++)
      {
        if(pos[i]!=0)
        {
        printf("\n %d",pos[i]);
        }
      }
    }
  else
  {
    printf("element is not present in the array");
  }
return 0;
}
