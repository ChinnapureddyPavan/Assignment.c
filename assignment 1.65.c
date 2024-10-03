#include<stdio.h>//program to print transpose of a matrix
int main()
{
  int i,j,n;
  printf("enter the number which should be the order of the matrix");
  scanf("%d",&n);
  int arr[n][n],temp[n][n];
  printf("enter the elements of the matrix");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  printf(" original 3*3 matrix is: ");
   for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d \t",arr[i][j]);
    }
    printf("\n");
  }
   for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i<j)
      {
        temp[i][j]=arr[i][j];
        arr[i][j]=arr[j][i];
        arr[j][i]=temp[i][j];
      }
    }
  }
  printf(" transposed 3*3 matrix is: ");
   for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d \t",arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}



