#include <stdio.h>
#include<string.h>
int main()
{
    char ch,s1[30];
    printf("enter the strng 1:");
    gets(s1);
    int i,l;
    l=strlen(s1);
    for(i=0;i<l/2;i++)
    { 
        if(s1[i]!='\0')
           {
              ch=s1[i];
              s1[i]=s1[l-i-1];
              s1[l-i-1]=ch;
          }
        
    }
    printf("reverse of string is %s",s1);
}
