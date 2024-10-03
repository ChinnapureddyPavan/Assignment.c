#include<stdio.h>
int main()
{
  int n1,n2,i,j;
  printf("enter the number of elements in array 1:");
  scanf("%d",&n1);
  printf(" enter the number of elements in array 2:");
  scanf("%d",&n2);
  int a[n1],b[n2],c[n1+n2],d[n1+n2];
  printf("enter the elements of first array: \n");
  for(i=0;i<n1;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("enter the elements of second array: \n");
  for(i=0;i<n2;i++)
  {
      scanf("%d",&b[i]);
  }
  printf("the elements of array 1 are: \n");
  for(i=0;i<n1;i++)
  {
      printf("%d \t",a[i]);
  }
  printf(" \n the elements of array 2 are: \n");
  for(i=0;i<n2;i++)
  {
      printf("%d \t",b[i]);
  }
  for(i=0;i<n1;i++)
  {
      c[i]=a[i];
  }
  for(i=0;i<n2;i++)
  {
      c[i+n1]=b[i];
  }
  printf(" \n elements of third array are before sorting are: \n");
  for(i=0;i<n1+n2;i++)
  {
      printf("%d \t",c[i]);
  }
  for(i=0;i<n1+n2;i++)
  {
      d[i]=c[i];
  }
  for(i=0;i<n1+n2;i++)
  {
      for(j=0;j<n1+n2;j++)
      {
      if(c[j]>c[j+1])
      {
         d[j]=c[j];
         c[j]=c[j+1];
         c[j+1]=d[j];
      }
      else
      {
          continue;
      }
      }
  }
  printf(" \n the elements of third array after sorting are: \n");
  for(i=0;i<n1+n2;i++)
  {
      printf("%d \t",c[i]);
  }
  return 0;
}
