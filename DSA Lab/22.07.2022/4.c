#include<stdio.h>
int main()
{
  int a[50];
  int i,j,n,tmp;
  printf("enter the no. of integers ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
     scanf("%d",&a[i]);
  for(i=1;i<n;i++)
  {
    for(j=0;j<n-1;j++)
    {
      if(a[j]>a[j+1])
      {
        tmp=a[j];
        a[j]=a[j+1];
        a[j+1]=tmp;
      }
    }
  }
  printf("The array in ascending order is-\n");
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
  return 0;
}
