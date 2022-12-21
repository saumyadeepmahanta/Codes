#include<iostream>
using namespace std;
int main()
{
  int i,j,s;
  s=0;
  int a[3][3];
  for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
      {
        cout<<"enter no. ";
        cin>>a[i][j];
      }
   }
   for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        if(i==j || i+j==3)
          s=s+a[i][j];
      }
    }
    cout<<"trace is "<<s;
    return 0;
}
