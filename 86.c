#include<stdio.h>//Function to find length of string

#include<string.h>

int stringlength(char *strl);

int main()

{

    char st[100],*strl;

    int result;

    printf("Enter the string:");

    gets(st);

    strl=st;

    result=stringlength(strl);

    printf("Length of string=%d",result);

}

int stringlength(char *strl)

{

    int l;

    l=strlen(strl);

    return l;

}

