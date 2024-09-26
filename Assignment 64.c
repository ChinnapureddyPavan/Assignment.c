#include<stdio.h>
int main()
{
    int a[3][3],sum1=0,sum2=0,sum3=0;
    printf("enter the matrix elements");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<1;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum1=sum1+a[i][j];
        }
    }
    for(int i=1;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum2=sum2+a[i][j];
        }
    }
    for(int i=2;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum3=sum3+a[i][j];
        }
    }
    printf("row 1 sum=%d\n",sum1);
    printf("row 2 sum=%d\n",sum2);
    printf("row 3 sum=%d\n",sum3);
}
