#include<iostream>
using namespace std;
int main()
{
  int n,i,j,s;
  s=0;
  cout<<"enter nth term ";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    j=1;
    while(j<=i){
      s=s+j;
      j++;
    }
  }
  cout<<s;
}
