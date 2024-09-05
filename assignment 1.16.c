#include<stdio.h>
int main(){
float a,b,c;

    printf("enter a:");

    scanf("%f",&a);

    printf("enter b:");

    scanf("%f",&b);

    printf("enter c:");

    scanf("%f",&c);

if(a>b)
{

if(a>c)
{
    printf("a");
}

else if(a<c)
{
    printf("c");
}

else if(a==c)
{
    printf("a&c");
}
}

else if(b>a)
{

if(b>c)
{
    printf("b");
}

else if(b<c)
{
    printf("c");
}

else if(b==c)
{
    printf("b&c");
}
}

if(a==b)
{
    printf("a&b");
}

else if(a==b==c)
{
    printf("all are equal");
}
return 0;
}
