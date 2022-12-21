#include<iostream>
using namespace std;
int main()
{
  int n,r,r1,r2,r3;
  cout<<"enter time in seconds ";
  cin>>n;
  r=n/60;
  r1=n%60;
  r2=r/60;
  r3=r%60;
  cout<<r2<<"Hours "<<r3<<"mins."<<r1<<"secs.";
  return 0;
}
