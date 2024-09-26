#include <stdio.h>
int main() 
{
 int a[3][3];
 printf("enter the a matrix");
 for (int i=1;i<=3;i++)
  {
      for (int j=1;j<=3;j++)
       {
           scanf("%d",&a[i][j]);
       }
  }
 printf("enter the matrix numbers");
   {
       for (int i=1;i<=3;i++)
        {
            for (int j=1;j<=3;j++)
             {
                 printf("%d \t",a[i][j]);
             }
             printf("\n");
        }
   }
   int sum1=0,sum2=0,sum3=0;
   for(int i=1;i<2;i++)
    {
      for(int j=1;j<=3;j++)
        {
            sum1=sum1+a[i][j];
        }
    }
     for(int i=2;i<3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            sum2=sum2+a[i][j];
        }
    }
     for(int i=3;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            sum3=sum3+a[i][j];
        }
    }
    printf(" sum of row1=%d ",sum1);
    printf(" sum of row2=%d ",sum2);
    printf(" sum of row3=%d ",sum3);
} 
