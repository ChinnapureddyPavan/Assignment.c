#include <stdio.h>
#include <string.h>

int main() 
{
    int l;
    char s1[30];
    char ch;
    char *ptr1, *ptr2;
    printf("Enter the string: ");
    gets(s1);
    l = strlen(s1);
    ptr1 = s1;
    ptr2 = s1 + l - 1;
    while (ptr1 < ptr2)
    {
        ch = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = ch;
        ptr1++;
        ptr2--;
    }
    printf("Reversed string is: %s\n", s1);
}
