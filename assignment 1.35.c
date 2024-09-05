#include<stdio.h>
int main(){
int rem,n;

    printf("emter a number:");

    scanf("%d",&n);

int sum1=0;

while(n>0)

    {

    rem=n%10;

    sum1=sum1+rem;

    n=n/10;

}

int sum2=0,rem2;

if(sum1>9)

{

while(sum1>0)

{

    rem2=sum1%10;

    sum2=sum2+rem2;

    sum1=sum1/10;

}

    printf("%d",sum2);

}

else

{

    printf("%d",sum1);

}

return 0;

}

