#include <stdio.h>

int main()
{
    int i,count=0,size;
    printf("enter the size:");
    scanf("%d",&size);
    char s1[30];
    char *str;
    str=&s1[0];
    printf("enter the string:");
    scanf("%s",str);
    while (*str != '\0') 
      {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
           {
            count++;
           }
        str++;
      }
      printf("no of vowels in the string is %d",count);
}
