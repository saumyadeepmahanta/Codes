#include<iostream>
using namespace std;
int main()
{
  int a[10][10];
  int n,i,j,s;
  s=0;
  cout<<"enter index";
  cin>>n;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
      cin>>a[i][j];
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i != j && i+j != n-1)
        s=s+a[i][j];
    }
  }
  cout<<s;
}
