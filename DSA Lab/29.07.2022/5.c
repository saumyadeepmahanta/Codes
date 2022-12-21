#include<stdio.h>
#include<math.h>
int main()
{
  int n,i,a;
  printf("enter no greater than 3:- ");
  scanf("%d",&n);
  a=pow(n,0.5);
  for(i=2;i<=a;i++)
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
