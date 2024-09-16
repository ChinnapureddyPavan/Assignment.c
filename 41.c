#include <stdio.h>
int main() 
 {
     int n;
    printf("enter the value of n");
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
         if(n%i==0)
         {
             printf("%d",i);
         }
             printf("\n");
     }
 }
