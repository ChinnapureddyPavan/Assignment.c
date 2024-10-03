#include<stdio.h>//program to rotate an array by N elements
int main()
{
    int n,N;
    printf("enter the number of elements in the array");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter the elements of the array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements of the array are: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    printf(" \n enter the number by which array should be rotated:");
    scanf("%d",&N);
    for( int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i+N<n)
        {
           a[i+N]=b[i] ;
        }
        else if(i+N>=n)
        {
            a[i+N-n]=b[i];
        }
    }
    printf("The array after rotating it through N elements is: \n");
    for( int i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    return 0;

}
