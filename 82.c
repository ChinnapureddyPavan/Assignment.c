#include<stdio.h>

int nfact(int n);

int rfact(int r);

int nrfact(int k);

int main()

{

    int n,r;

    printf("enter value of n and r in ncr:");

    scanf("%d%d",&n,&r);

    int result1=nfact(n);

    int result2=rfact(r);

    int k=n-r;

    int result3=nrfact(k);

    int ncr=result1/(result2*result3);

    printf("%d",ncr);

}

int nfact(int n)

{

    if(n==0)

    {

        return 1;

    }

    else

    {

        return n*nfact(n-1);

    }

}

int rfact(int r)

{

    if(r==0)

    {

        return 1;

    }

    else

    {

        return r*rfact(r-1);

    }

}

int nrfact(int k)

{

    if(k==0)

    {

        return 1;

    }

    else

    {

        return (k)*nrfact(k-1);

    }

}




