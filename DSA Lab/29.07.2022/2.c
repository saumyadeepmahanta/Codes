#include<stdio.h>
int main()
{
  int a[100];
  int b[100];
  int i,n,c2,c1,j,k;
  c2=0;
  j=0;
  printf("enter the no. of integers ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
   {
     if(a[i]%2 !=0){
        b[j]=a[i];
        c2++;
        j++;
      }
   }
   for(i=0;i<n;i++)
   {
     if(a[i]%2==0)
     {
       b[c2]=a[i];
       c2++;
     }

   }
   for(i=0;i<c2;i++)
     printf("%d ",b[i]);
  printf("\n");
  printf("%d",c2);


    return 0;

}
