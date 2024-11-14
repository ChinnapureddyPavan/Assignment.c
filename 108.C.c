#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s1[30],s2[30];
    printf("enter the string 1:");
    gets(s1);
    printf("enter the string 2:");
    gets(s2);
    int l;
    l=strlen(s1);
    for(i=0;s1[i]!=0;i++)
    {
        
        s1[l+i]=s2[i];
    }
    printf("%s",s1);
}
