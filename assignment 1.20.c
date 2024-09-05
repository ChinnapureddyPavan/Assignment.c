#include<stdio.h>// program which will work like a simple calculator
int main(){
float a,b;

    printf("enter two numbers:");

    scanf("%f %f",&a,&b);
/*enter a number to determine the arthematic operation
1 is +
2 is -
3 is *
4 is /
*/
int op;

    printf("enter a number(1-4):");

    scanf("%d",&op);

float sum=a+b;

float sub=a-b;

float mul=a*b;

float div=a/b;

switch(op){

case 1 :printf("sum is %f",sum);

break;

case 2 :printf("sub is %f",sub);

break;

case 3 :printf("mul is %f",mul);

break;

case 4 :printf("div is %f",div);

break;

default :printf("not a simple operation");

}

return 0;

}
