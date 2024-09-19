#include<stdio.h>//program to print commision for different value of sales
int main(){
float sales,commision;

    printf("enter sales");

    scanf("%f",&sales);

if(sales<=500){

    commision=(sales/20);

    printf("%f",commision);

}

else if(sales>500 && sales<2000){

    commision=(35+(sales-500)/10);

    printf("%f",commision);

}

else if(sales>2000 && sales<5000){

    commision=(185+((sales-2000)*3/25));

    printf("%f",commision);

}

else if(sales>5000){

    commision=(sales*12.5/100);

    printf("%f",commision);

}

return 0;

}
