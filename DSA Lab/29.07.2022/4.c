#include<stdio.h>
int main()
{
  int n,i;
  printf("enter no greater than 3:- ");
  scanf("%d",&n);
  for(i=2;i<=n/2;i++)
    {
      if(n%i==0){
          printf(" Not prime ");
          break;
        }
        else
        {
          printf(" prime ");
          break;
        }

      }
  }
