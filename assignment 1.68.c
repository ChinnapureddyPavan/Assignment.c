#include<stdio.h>//program to print multiplication of two matrices as third matrix
int main()
{
  int i,j,n,k;
  printf("enter the number which should be the order of the matrix");
  scanf("%d",&n);
  int arr1[n][n],arr2[n][n],arr3[n][n];
  printf("enter the elements of the matrix one \n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&arr1[i][j]);
    }
  }
  printf("enter the elements of the matrix two \n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&arr2[i][j]);
    }
  }
  printf("first matrix: \n");
   for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d \t",arr1[i][j]);
    }
    printf("\n");
  }
     printf("second matrix: \n");
     for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d \t",arr2[i][j]);
    }
    printf("\n");
  }
  printf("multiplication of two matrices is: \n");
   for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      arr3[i][j]=0;
      for(k=0;k<n;k++)
      {
        arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
      }
      printf("%d \t",arr3[i][j]);
    }
    printf("\n");
  }
  return 0;
}



