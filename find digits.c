#include<stdio.h>
int main()
{
    int n,t;
    printf("enter the value of number :");
    scanf("%d",&n);
    int rem;
    int m=n;
    while(n>0)
    {
        rem=n%10;
        if(m%rem==0)
        {
            t++;
        }
        n=n/10;
    }
    printf("no of digits in the entered number divide the entered number is %d  ",t);
}
