#include <stdio.h>
int main()
{
  int palindrom(int n)
  {
      int rem,sum=0;
      int num=n;
      while(n>0)
       {
           rem=n%10;
           sum=sum*10+rem;
           n=n/10;
       }
       if(num==sum)
       printf("entered number is palindrom");
       else
       printf("entered number is not palindrom");
  }
  int n;
  palindrom(121);
}
