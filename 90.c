#include<stdio.h>

int main()
{
    char s1[30];
    printf("enter the string:");
    gets(s1);
    int i,length=0;
    char *ptr;
    ptr=&s1;
    while(*ptr !='\0')
   {
    length++;
    ptr++;
   }
   int d=0;
    for(ptr=s1;*ptr!='\0';ptr++)
    {
        if(*ptr==' ')
        {
         d++;   
        }
        
    }
    printf(" total length of the string is %d\n",length);
    printf("length of the string including spaces is %d\n",length);
    printf("length without spaces is %d",length-d);

}
