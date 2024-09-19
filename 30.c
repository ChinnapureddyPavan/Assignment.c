#include<stdio.h>
#include <math.h>
int main()
{
           int i,N,revnum=0,num,k=0,m,j;
          printf("program to checck the num is palindrome or not");
          printf("\nenter the number N");
          scanf("%d",&N);
          m=N;
          num=N;
          while(num>0)
          {
          num=num/10;
          k++;
          }
          for(j=k;m>0;j--)
          {
          i=m%10;
          revnum=revnum+i*pow(10,j-1);
          m=m/10;
          }
          printf("revnum=%d",revnum);
          
return 0;
}