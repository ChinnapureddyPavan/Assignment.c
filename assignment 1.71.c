#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of elements in the array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of the array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements of the array are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
