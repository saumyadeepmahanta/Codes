#include<stdio.h>
int main()
{
  int enter(int *a);
  int a[100];
  int n;
  n=enter(a);
  for(int i=0;i<n;i++)
    printf("%d",a[i]);
  return 0;

}
int enter(int *a)
{
  int i,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",(a+i));
  return n;
}
