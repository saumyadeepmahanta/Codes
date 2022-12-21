#include<iostream>
using namespace std;
int main()
{
  int a[3][3];
  int b[3][3];
  int c[3][3];
  int i,j,k,s;
  for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        cout<<"enter no.";
        cin>>a[i][j];
      }
    }
    for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
          cout<<"enter no.";
          cin>>b[i][j];
        }
      }
      for(i=0;i<3;i++)
        {
          for(j=0;j<3;j++)
          {
            s=0;
            for(k=0;k<3;k++)
             {
               s=s+a[i][k]*b[k][j];
               c[i][j]=s;
             }
          }
        }
        for(i=0;i<3;i++)
          {
            for(j=0;j<3;j++)
            {
              cout<<c[i][j]<<" ";


            }
            cout<<"\n";
          }
}
