#include<stdio.h>
int main()
{
  int n,i,j;
  printf("enter number of students:");
  scanf("%d",&n);
  int sub1[n],sub2[n],sub3[n],tot[n],c1[n],c2[n],c3[n],h1[n],h2[n],h3[n],ht[n],ct[n],sub11[n],sub21[n],sub31[n],tot1[n];
  for(i=0;i<n;i++)
  {
      h1[i]=0;h2[i]=0;h3[i]=0;ht[i]=0;
  }
  printf("enter the marks of student in subject1 :");
  for(i=0;i<n;i++)
  {
      scanf("%d",&sub1[i]);
      sub11[i]=sub1[i];
  }
  printf("enter the marks of student in subject2 :");
  for(i=0;i<n;i++)
  {
      scanf("%d",&sub2[i]);
      sub21[i]=sub2[i];
  }
  printf("enter the marks of student in subject3 :");
  for(i=0;i<n;i++)
  {
      scanf("%d",&sub3[i]);
      sub31[i]=sub3[i];
  }
  printf(" \n marks of different students in subject 1: \n");
  for(i=0;i<n;i++)
  {
      printf("%d \t",sub1[i]);
  }
  printf(" \n marks of different students in subject 2: \n");
  for(i=0;i<n;i++)
  {
      printf("%d \t",sub2[i]);
  }
  printf(" \n marks of different students in subject 3: \n");
  for(i=0;i<n;i++)
  {
      printf("%d \t",sub3[i]);
  }
  for(i=0;i<n;i++)
  {
      tot[i]=sub1[i]+sub2[i]+sub3[i];
      tot1[i]=tot[i];
      printf(" \n total marks obtained by student %d is %d",i+1,tot[i]);
      for(j=0;j<n;j++)
      {
        if(sub1[i]>sub1[j])
      {
          h1[i]=sub1[i];
          c1[i]=i+1;
      }
      }
      for(j=0;j<n;j++)
      {
      if(sub2[i]>sub21[j])
      {
          h2[i]=sub2[i];
          c2[i]=i+1;
      }
      }
      for(j=0;j<n;j++)
      {
      if(sub3[i]>sub31[j])
      {
          h3[i]=sub3[i];
          c3[i]=i+1;
      }
      }
      for(j=0;j<n;j++)
      {
      if(tot[i]>tot1
         [j])
      {
          ht[i]=tot[i];
          ct[i]=i+1;
      }
      }
    }
  printf(" \n Highest marks in subject 1 are obtained by roll number ");
  for(i=0;i<n;i++)
  {
      if(h1[i]!=0)
      {
          printf("%d \t",c1[i]);
      }
  }
  printf(" \n and their marks are:");
  for(i=0;i<n;i++)
  {
      if(h1[i]!=0)
      {
          printf("%d \t",h1[i]);
      }
  }
  printf(" \n Highest marks in subject 2 are obtained by roll number ");
  for(i=0;i<n;i++)
  {
      if(h2[i]!=0)
      {
          printf("%d \t",c2[i]);
      }
  }
  printf(" \n and their marks are:");
  for(i=0;i<n;i++)
  {
      if(h2[i]!=0)
      {
          printf("%d \t",h2[i]);
      }
  }
  printf(" \n Highest marks in subject 3 are obtained by roll number ");
  for(i=0;i<n;i++)
  {
      if(h3[i]!=0)
      {
          printf("%d \t",c3[i]);
      }
  }
  printf(" \n and their marks are:");
  for(i=0;i<n;i++)
  {
      if(h3[i]!=0)
      {
          printf("%d \t",h3[i]);
      }
  }
  printf(" \n Highest marks in total are obtained by roll number ");
  for(i=0;i<n;i++)
  {
      if(ht[i]!=0)
      {
          printf("%d \t",ct[i]);
      }
  }
  printf(" \n and their marks are:");
  for(i=0;i<n;i++)
  {
      if(ht[i]!=0)
      {
          printf("%d \t",ht[i]);
      }
  }
  return 0;

}
