
#include<stdio.h>
int main()
{
  int a[100];
  int b[100];
  int c[100];
  int d[100];
  int i,n,c2,c1,j,k;
  int f;
  f=0;
  c2=0;
  j=0;
  k=0;
  c1=0;
  printf("enter the no. of integers ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
   {
     if(a[i]%2 !=0){
        b[j]=a[i];
        f++;
        c[i]=i;
        c2++;
        j++;
        f++;
      }
      else{
        d[k]=a[i];
        c1++;
        k++;
        f++;
    }
  }
    for(j=0;j<c2;j++)
    printf("%d",b[j]);
    for(k=0;k<c1;k++)
        printf("%d",d[k]);
  printf("\n");
   printf("%d",c1+c2+f);
    return 0;

}
