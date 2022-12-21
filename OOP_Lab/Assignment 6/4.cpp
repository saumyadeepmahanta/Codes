#include <iostream>
using namespace std;
inline int square(int n)
    {
        return n*n;
    }
inline int cube(int n)
    {
        return n*n*n;
    }
int main()
{
    int n, r;
    cout <<"Enter the Number- ";
    cin>>n;
    r=square(n);
    cout<<"Square of "<<n<<"= "<<r<<"\n";
    r=cube(n);
    cout<<"Cube of "<<n<<"= "<<r;
}
