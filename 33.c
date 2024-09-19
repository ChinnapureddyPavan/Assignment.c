#include<stdio.h>
#include <math.h>
int main()
{
           int i,max=0,min=0,n,k,o;
          printf("program to print max and secmax");
          printf("\nenter the numbers");
          scanf("%d",&n);
          for(i=1;i<=n;i++)
          {
          scanf("%d",&o);
          k=o;
          if(k>=max)
          {
          max=k;
          }
          if(k<=min)
          {
          min=k;
          }
          }
          printf("max=%d",max);
          printf("min=%d",min);
return 0;
}