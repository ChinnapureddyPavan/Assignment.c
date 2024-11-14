#include<stdio.h>

int prime(int n)
{
  int flag=0;
  int i;
  for(i=2;i<n;i++)
  {
      if(n%i==0)
      {
          flag++;
          
      }
  }
  if(flag==0)
  
  {
   printf("1");
  }
  else
  {
      printf("0");
  }
  
}
int main()
  {
      prime(3);
  }
