#include <iostream>
using namespace std;
int main ()
{
    int i,j,k,flag=1;
    int a[3][3],temp[3][3],check[3][3],sum=0;
    cout<<"Enter Elements in matrix- ";
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                cin>>a[i][j];
        }
    for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
                temp[i][j]=a[j][i];
        }
    for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
            {
            for(k=0;k<3;k++)
                {
                    sum+=(a[i][k]*temp[k][j]);
                }
            check[i][j]=sum;
            sum=0;
            }
        }
    for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
            {
                if(i==j && check[i][j]!=1)
                    flag=0;
                if(i!=j && check[i][j]!=0)
                    flag=0;
            }
        }
    if(flag==1)
        printf("Matrix is Orthogonal\n");
    else
        printf("Matrix is not Orthogonal\n");
    return 0;
}
