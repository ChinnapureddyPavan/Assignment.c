#include<stdio.h>//program to print sum of all positive numbers entered until user enters a negative number
int main(){
int n,i,sum=0;

for(i=1;i>0;i++){

    printf("enter a number:");

    scanf("%d",&n);

if(n>0)

{

    sum=sum+n;

}

else

{

    break;

}

}

    printf("sum of all positive numbers entered is %d",sum);

return 0;

}
