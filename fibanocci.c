#include<stdio.h>
int main()
{
    int n,sum,x=1;
    printf("enter the number : ");
    scanf("%d",&n);
    int a=0,b=1;
    printf("0 \n");
    while(sum<=n)
    {
        a=b;
        b=sum;
        sum=a+b;
        printf("%d \n",sum);
        if(n==sum  )
        {
            x++;
        }
    }
    if(x==2)
    printf("entered number is in fibanocci series");
    else
     printf("entered number is not  in fibanocci series");
    
}
