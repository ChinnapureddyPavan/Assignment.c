#include<stdio.h>//program to print sum of number divided by its factorial upto number n
int main(){
float n,fact=1,sum=0;
int i,k;

    printf("enter a number :");

    scanf("%f",&n);

for(i=1;i<=n;i++)
    {
        k=i;

    fact=fact*i;

    sum=sum+i/fact;

    printf("+%d/%d!",i,k);
    }
    printf("\n=%f",sum);

}
