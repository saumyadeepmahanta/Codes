#include<iostream>
using namespace std;
int main()
{
  int a[50];
  int i,n,mn;
  cout<<"enter no. of integers ";
  cin>>n;
  for(i=0;i<n;i++)
    cin>>a[i];
  for(i=0;i<n;i++)
   {
     if(i==0)
       mn=a[i];
     if(mn>a[i])
       mn=a[i];
   }
    cout<<"The smallest no. is "<<mn;
}
