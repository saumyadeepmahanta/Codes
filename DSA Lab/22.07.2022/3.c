#include<stdio.h>
int main()
{
  int a[50];
  int i,n,sn;
  int f;
  printf("enter the no. of integers ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  f=0;
  printf("enter no. to be searched ");
  scanf("%d",&sn);
  for(i=0;i<n;i++)
    {
      if(a[i]==sn)
      {
        printf("Found");
        f=1;
        break;
      }
    }
      if(f==0)
        printf("Not Found");

  return 0;
}
