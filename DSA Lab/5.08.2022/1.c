#include<stdio.h>
#include<math.h>
int main()
{
  void sum(int a[],int b[],int n,int m);
  int n,i,p,q,m;
  printf("Enter the highest power ");
  scanf("%d",&n);
  int a[100];
  int b[100];
  for(i=n;i>=0;i--)
  {
    printf("enter the coefficients ");
    scanf("%d",&p);
    a[i]=p;
  }
  printf("Enter the highest power ");
  scanf("%d",&m);
  for(i=m;i>=0;i--)
  {
    printf("enter the coefficients ");
    scanf("%d",&q);
    b[i]=q;
  }
  sum(a,b,n,m);
  return 0;
}
void sum(int a[],int b[],int n,int m)
{
  int s1,s2,i,x;
  s1=0;
  s2=0;
  printf("enter the value of x ");
  scanf("%d",&x);
  for(i=n;i>=0;i--)
  {
    s1=s1+a[i]*pow(x,n);
    n--;
  }
  for(i=m;i>=0;i--)
  {
    s2=s2+b[i]*pow(x,m);
    m--;
  }
  printf("%d",s1+s2);
}
