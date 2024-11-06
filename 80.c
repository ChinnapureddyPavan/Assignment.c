// Online C compiler to run C program online
#include <stdio.h>

void fibanocci(int n)
{
    int i,a=0,b=1,sum=1;
    printf("%d  %d  ",a,b);
    for(i=1;i<=n-2;i++)
    {
      a=b;
      b=sum;
      sum=a+b;
      printf("%d ",sum);
    }
    printf("\n");
    
    
}
int main()
{
    fibanocci(5);
    fibanocci(10);
    fibanocci(15);
}
