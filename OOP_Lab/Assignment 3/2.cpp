#include<iostream>
using namespace std;
int main()
{
  int n,r,a;
  cout<<"enter amount ";
  cin>>n;
  r=n/60;
  a=n%60;
  cout<<r<<"rupees "<<a<<"paise";
  return 0;
}
