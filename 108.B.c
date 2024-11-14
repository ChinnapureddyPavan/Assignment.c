#include<stdio.h>
#include<string.h>
int main() 
{
    char s1[30],s2[30];
    printf("enter the string 1:");
    gets(s1);
    printf("enter the string 2:");
    gets(s2);
    int flag=0,i;
    for(i=0;s1[i]!='\0'|| s2[i]!='\0';i++)
     {
        if(s1[i]!=s2[i])
        {
           flag=1;
           break;
        }
     }
    if(flag==1)
    {
        printf("both strings are not same");
    }
    else
    {
        printf("both strings are same");
    }
}
