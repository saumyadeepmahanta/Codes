#include<iostream>
using namespace std;
int main()
{
  int a[50];
  int i,n,mx;
  cout<<"enter no. of integers ";
  cin>>n;
  for(i=0;i<n;i++)
    cin>>a[i];
  for(i=0;i<n;i++)
   {
     if(i==0)
       mx=a[i];
     if(mx<a[i])
       mx=a[i];
   }
    cout<<"The largest no. is "<<mx;
}
