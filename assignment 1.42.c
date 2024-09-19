#include<stdio.h>//program to find whether entered number is prime or composite
int main(){
int n,i,x=1;

    printf("enter a number :");

    scanf("%d",&n);

for(i=1;i<=n;i++)

{

if(n%i==0)

{

    x++;

}

}
if(x==3)

{

    printf("entered number is a prime number");

}

else if(x==2)

{

    printf("entered number is nor prime nor composite");

}

else

{

    printf("emtered number is a composite number");

}
return 0;

}
