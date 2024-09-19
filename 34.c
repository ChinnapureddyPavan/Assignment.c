#include<stdio.h>
#include <math.h>
int main()
{
           int i,num1=0,num2=1,n,nextnum;
          printf("program to fibanocci series");
          printf("\nenter the number");
          scanf("%d",&n);
          printf("%d,%d",num1,num2);
          nextnum=num1+num2;
          for(i=1;i<=n;i++)
          {
          num2=nextnum;
          nextnum=num1+num2;
          printf(",%d",nextnum);
          num1=num2;
          }
return 0;
}