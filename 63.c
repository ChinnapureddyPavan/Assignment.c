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
   int small,large;
   small=large=a[0][0];
   for(int i=1;i<=3;i++)
   {
       for(int j=1;j<=3;j++)
       {
           if(a[i][j]>large)          
            {
                large=a[i][j];
            }
            if(a[i][j]<small)
            {
                small=a[i][j];
            }
       }
   }
   printf("max=%d",large);
   printf(" min=%d ",small);
}
