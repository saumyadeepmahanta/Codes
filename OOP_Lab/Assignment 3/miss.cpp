#include<iostream>
using namespace std;
int main()
{
  int a[100];
  int n,i,s;
  s=0;
  cout<<"enter no. of integrrs ";
  cin>>n;
  for(i=0;i<n;i++)
    cin>>a[i];
  for(i=0;i<n;i++)
    s=s+a[i];
  cout<<"The sum is "<<s;
  return 0;
}
