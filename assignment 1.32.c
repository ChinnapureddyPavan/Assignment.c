#include<stdio.h>//program to find sum of individual numbers of a number
int main(){
int n,rem,sum=0,i;

    printf("enter a number :");

    scanf("%d",&n);

for(i=1;n>0;i++){

    rem=n%10;

    sum=sum+rem;

    n=n/10;

}

    printf("%d",sum);

return 0;

}
