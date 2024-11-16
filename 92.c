#include <stdio.h>

int main()
{
    int a[30],size;
    printf("enter the size:");
    scanf("%d",&size);
    printf("enter the numbers:");
    int *ptr;
    ptr=&a;
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&(*(ptr+i)));
    }
    printf("biggest number is:");
    int max=0;
    for(i=0;i<size;i++)
    {
        if(*(ptr+i)>max)
        {
            max=*(ptr+i);
        }
    }
    printf("%d",max);
    
}
