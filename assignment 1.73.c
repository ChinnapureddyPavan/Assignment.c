#include<stdio.h>//program to count number of votes voted to five candidates in elections
int main()
{
  int a[6],n,v,i,x;
  printf("enter the number of voters:");
  scanf("%d",&v);
  printf("enter 1 to cast your vote to candidate 1 \n");
  printf("enter 2 to cast your vote to candidate 2 \n");
  printf("enter 3 to cast your vote to candidate 3 \n");
  printf("enter 4 to cast your vote to candidate 4 \n");
  printf("enter 5 to cast your vote to candidate 5 \n");
  printf(" \n CAUTION!! IF YOU ENTER ANY NUMBER OTHER THAN (1-5) THEN YOUR VOTE WILL BE COUNTED INTO SPOILT BALLOT \n");
  printf(" \n enter number of candidate you want to cast to your vote");
  for(i=0;i<6;i++)
  {
      a[i]=0;
  }
  for(i=0;i<v;i++)
  {
      scanf("%d",&x);
      if(x==1)
      {
          a[0]++;
      }
      else if(x==2)
      {
          a[1]++;
      }
      else if(x==3)
      {
         a[2]++;
      }
      else if(x==4)
      {
          a[3]++;
      }
      else if(x==5)
      {
         a[4]++;
      }
      else
      {
          a[5]++;
      }
  }
  for(i=0;i<5;i++)
  {
      printf("number of votes for candidate %d are %d \n",i+1,a[i]);
  }
  printf("number of spoilt ballot votes are %d",a[5]);
  return 0;

}
