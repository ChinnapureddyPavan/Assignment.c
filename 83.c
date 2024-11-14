#include<stdio.h>

int n;

int arrmax(int a[],int n);

int main()

{

    printf("enter number of elements of the array:");

    scanf("%d",&n);

    int a[n];

    arrmax(a,n);

}

int arrmax(int a[],int n)

{

    int max=0,i;

    printf("\n enter the elements of the array:");

    for(i=0;i<n;i++)

    {

        scanf("%d",&a[i]);

    }

    printf(" \n elements of the array are: \n");

    for(i=0;i<n;i++)

    {

        printf("%d \t",a[i]);

    }

    for(i=0;i<n;i++)

    {

        if(a[i]>max)

        {

            max=a[i];

        }

    }

    printf(" \n max element in the array is %d",max);

}

