#include<stdio.h>
int main()
{
  int a[100];
  int s,i,j,n,m,c;
  c=0;
  printf("Enter the sum ");
  scanf("%d",&s);
  printf("enter the no. of integers ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);

  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
      {
        if(a[i]+a[j]==s)
        {
          printf("%d  %d ",a[i],a[j]);
          printf("\n");
          c++;
        }
      }
  }
  printf("%d",c);
  return 0;
}
