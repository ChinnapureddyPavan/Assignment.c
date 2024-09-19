#include<stdio.h>//program to find all the factors of a given number
int main(){
int n,i;

    printf("enter a number:");

    scanf("%d",&n);

    printf("the factors of n are:");

for(i=1;i<=n;i++)

{

if(n%i!=0)

continue;

    printf("%d,",i);

}

return 0;

}
