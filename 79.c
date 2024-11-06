// Online C compiler to run C program online
#include <stdio.h>

void swap(int x,int y)
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("after swaping the value of x is %d and y is %d",x,y);
}
int main()
{

    swap(2,3);
}
