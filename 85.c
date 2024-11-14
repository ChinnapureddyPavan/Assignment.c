#include<stdio.h>

void vowel(char ch);

int main()

{

    char ch;

    printf("enter a charecter:");

    scanf("%c",&ch);

    vowel(ch);

}

void vowel(char ch)

{

    if(ch>'A'&&ch<'Z')

    {

        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')

        {

            printf("vowel");

        }

        else

        {

            printf("consonant");

        }

    }

    else if(ch>'a'&&ch<'z')

    {

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')

        {

            printf("vowel");

        }

        else

        {

            printf("consonant");

        }

    }

    else

    {

        printf("not a letter");

    }

}

