#include<stdio.h>
int main()
{
  int n,i;
  printf("enter no ");
  scanf("%d",&n);
  for(i=2;i<=n;i++)
    {
      if(n%i==0)
      {
        if(n==i)
          printf("prime ");
        else
        {
          printf("Not prime ");
          break;
        }

      }
    }
}
