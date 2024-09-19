#include<stdio.h>//program to print electricity bill
int main(){
int units,charge;

printf("enter number of units :");

scanf("%d",&units);

if(units<=200){

charge=(0.50*units);

printf("electricity bill amount is %d",charge);

}

else if(units>200 && units<=400){

charge=(100+(units-200)*0.65);

printf("electricity bill amount is %d",charge);

}
else if(units>400 && units<=600){

charge=(230+(units-400)*0.85);

printf("electricity bill amount is %d",charge);

}
else if(units>600){

charge=(425+(units-600)*1.25);

printf("electricity bill amount is %d",charge);

}

return 0;

}
