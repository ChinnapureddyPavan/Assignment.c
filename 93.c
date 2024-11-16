#include <stdio.h>

int main()
{
    char s1[30];
    printf("enter the string:");
    gets(s1);
    char *ptr;
    ptr=&s1;
    int d=1,i;
    for(ptr=s1;*ptr!='\0';ptr++)
    {
        if(*ptr==' ')
        {
            d++;
            
        }
    }
    printf("no of words in the string is %d",d);
}
