#include<stdio.h>//program to read marks in five subjects and print division
int main(){
float a,b,c,d,e;//a is maths,b is physics,c is chemistry,d is english,e is hindi,M is total marks,P is percentage

    printf("enter a(0-100):");

    scanf("%f",&a);

    printf("enter b(0-100):");

    scanf("%f",&b);

    printf("enter c(0-100):");

    scanf("%f",&c);

    printf("enter d(0-100):");

    scanf("%f",&d);

    printf("enter e(0-100):");

    scanf("%f",&e);

float M=a+b+c+d+e;

float P=M*100/500;

if(P>90&P<100)
{
printf("A division");
}
else if(P>70&P<90)
{
printf("B division");
}
else if(P>50&P<70)
{
    printf("C division");
}
else if(P>35&P<50)
{
    printf("D division");
}
else if(P>0&P<35)
{
    printf("fail");
}
else
{
    printf("not valid");
}

return 0;

}
