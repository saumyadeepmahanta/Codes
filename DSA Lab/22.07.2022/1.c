#include<stdio.h>
int main()
{
  int a[100];
  int n,i,mx,mn;
  printf("enter the no. of integers ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
    {
      if(i==0)
        {
          mx=a[i];
          mn=a[i];
        }

       else
       {
         if(mx<a[i])
           mx=a[i];
         if(mn>a[i])
           mn=a[i];
       }
    }
    printf("The largest integer is %d\n ",mx);
    printf("The smallest integer is %d ",mn);
    return 0;
}
