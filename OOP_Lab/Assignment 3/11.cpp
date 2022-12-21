#include<iostream>
using namespace std;
int main()
{
  int a[3][3];
  int c[3][3];
  int tmp,f,i,j;
  f=0;
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
         c[i][j]=a[i][j];
     }
     for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
          {
            cout<<c[i][j];
          }
          cout<<"\n";
      }
    for(i=0;i<3;i++)
     {
       for(j=i+1;j<3;j++)
       {
         tmp=a[i][j];
         a[i][j]=a[j][i];
         a[j][i]=tmp;
       }
     }
     for(i=0;i<3;i++)
      {
        f=1;
        for(j=0;j<3;j++)
         {
           if(c[i][j]==a[i][j])
             f=0;
           else{
             f=1;
             break;
           }
         }


      }
      if(f==0)
        cout<<"symmetric";
      else
        cout<<"not symmetric";
      return 0;
}
