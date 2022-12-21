#include<stdio.h>
int main()
{
  int a[100];
  int b[100];
  int i,n,j,c,m,f;
  f=0;
  printf("enter the no. of integers ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("enter the no. of integers of subarray ");
  scanf("%d",&m);
  for(i=0;i<m;i++)
    scanf("%d",&b[i]);
  for(i=0;i<m;i++)
  {
    f=1;
    c=b[i];
    for(j=0;j<n;j++)
     {
       if(c==a[j]){
         f=0;
       }
     }
  if(f==1){
    break;
  }


  }
  if(f==0)
    printf("It is a subarray");
  else
    printf("It is not a subarray");
  return 0;
}
