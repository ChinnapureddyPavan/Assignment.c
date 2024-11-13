#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    printf("enter no of rocks:");
    scanf("%d",&n);
    char s1[n][30];
    for(i=0;i<n;i++)
    {
        printf("enter the elements in rock %d:",i+1);
        scanf("%s",&s1[i]);
    }
    int gem_stone=0;
   for(char ch='a';ch<='z';ch++)
   {
      int flag=1;
      for(i=0;i<n;i++)
      {
        if(strchr(s1[i],ch)==NULL)
        {
            flag=0;
            break;
        }
      }
      if(flag==1)
      {
        gem_stone++;
      }
   }
    printf("no:of gem stones are %d\n",gem_stone);
}
