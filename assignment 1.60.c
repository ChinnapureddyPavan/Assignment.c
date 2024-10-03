#include<stdio.h>//selection sort
void main()
{
    int num;
    printf("ENTER THE NUMBER OF ELEMENTS IN THE ARRAY ");
    scanf("%d",&num);
    int arr[num];
    printf("ENTER THE ELEMENTS OF THE ARRAY ");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("UNSORTED ARRAY IS:");
    for(int i=0;i<num;i++)
    {
        printf(" %d ",arr[i]);
    }
    int select=arr[0],swap=0;
    for(int i=0;i<num;i++)
    {
        select=arr[i];
        for(int j=0;j<num;j++)
        {
            if(select>arr[j])
            {
                swap=arr[j];
                arr[j]=select;
                select=swap;
            }
        arr[i]=select;
    }
    }
    printf("\nTHE SORTED ARRAY IS : ");
    for(int i=num-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

}

