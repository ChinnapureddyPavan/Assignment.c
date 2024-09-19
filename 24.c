#include<stdio.h>
int main()
{
           int x,y,n;
          printf("program to print value of y");
           printf("\nenter the values of x and n");
          scanf("%d %d",&x,&n);
          if(n==1)
          {
          y=1+x;
          printf("y=%d",y);
          }
          else if(n==2)
          {
          y=1+(x/n);
          printf("y=%d",y);
          }
          else if(n==3)
          {
          y=1+pow(x,n);
          printf("y=%d",y);
          }
          else if(n<1||n>3)
          {
          y=1+n*x;
          printf("y=%d",y);
          }
          
          
return 0;
}