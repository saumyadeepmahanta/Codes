#include<stdio.h>
int main()
{
  int a[100];
  int n,i,j,c;
  c=0;
  printf("enter the no. of integers ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
     scanf("%d",&a[i]);
  for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
        printf("%d",a[i]);
        c++;
        if(a[j]<a[i])
          break;
      }
    }
  printf("%d",c);
  return 0;
}
