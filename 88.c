#include<stdio.h>
int main()
{
    int a[30],b[30];
    int* ptr1=&a;
    int* ptr2=&b;
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    printf("enter the array:");
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&(*(ptr1+i)));
    }
    printf("copied array:");
    for(i=0;i<size;i++)
    {
        *(ptr2+i)=*(ptr1+i);
    }
    for(i=0;i<size;i++)
    {
        printf("%d\n",*(ptr2+i));
    }


}























