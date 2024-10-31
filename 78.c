#include <stdio.h>
#include<math.h>
int main()
{
 int armstrong(int n)
 {
     int i;
     int m=n;
     int sum=0,rem;
     int num=n;
     for(i=0;m>0;i++)
     {
         m=m/10;
     }
     
     while(n>0)
     {
         rem=n%10;
         sum=sum+pow(rem,i);
         n=n/10;
     }
     printf("sum=%d\n",sum);
     if(num==sum)
     printf("entered number is armstrong");
     else
     printf("entered number is not armstrong ");
     
 }
 int n;
 armstrong(153);
 
}
