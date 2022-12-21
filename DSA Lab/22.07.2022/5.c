#include<stdio.h>
int main()
{
  int a[50];
  int n,i,k,j,c;
  int l,u;
  c=0;
  printf("enter the no. of integers ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);

   printf("Lower limit ");
   scanf("%d",&l);
   for(i=0;i<n;i++)
      {
        if(a[i]==l)
        k=i;
      }
   printf("upper limit ");
   scanf("%d",&u);
   for(i=0;i<n;i++)
      {
        if(a[i]==u)
        j=i;
      }
   if(k>j)
   {
     for(i=j;i<=k;i++){
       printf("%d",a[i]);
       c++;
     }
   }
   else
    {
      for(i=k;i<=j;i++){
        printf("%d ",a[i]);
        c++;
      }
    }
    printf("\n");
  printf("%d",c);
  return 0;
}
