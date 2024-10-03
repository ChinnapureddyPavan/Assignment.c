#include<stdio.h>//bubble sort
void main()
{
    int num;
    printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY ");
    scanf("%d",&num);
    int arr[num],a[num];
    int count=num;
    printf("ENTER THE ELEMENTS OF THE ARRAY ");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        a[i]=arr[i];
    }
    printf("THE UNSORTED ARRAY IS:");
    for(int i=0;i<num;i++)
    {
        printf(" %d ",a[i]);
    }
    for(int i=0;i<num;i++)//pass loop
    {
        for(int j=0;j<num-1-i;j++)//swap loop
        {
            if(arr[j]>arr[j+1])
            {
                a[i]=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=a[i];
            }
        }

    }
    printf("\n THE SORTED ARRAY IS : ");
    for(int i=0;i<num;i++)
    {
        printf(" %d ",arr[i]);
    }
}
