// create a class with an integer data member. Include functions for input and output in class. Count the number of times each function is called
// and display it
#include <iostream>
using namespace std;
class number
{
    int a;
    public:
        static int inpcnt;
        static int outcnt;
        void input()
            {
                cin >> a;
                inpcnt++;
            }
        void output()
            {
                cout << a;
                outcnt++;
            }
};
int number::inpcnt = 0;
int number::outcnt = 0;
int main()
{
    int n;
    class number num;
    cout<<"Enter the no. of times you want to call input and output- ";
    cin>>n;
    for (int i=0;i<n;i++)
        {
            cout<<"\nEnter the number- ";
            num.input();
            cout<< "Output- ";
            num.output();
        }
    cout<<"\nNo. of times inout and output are called- "<< num.inpcnt<< ", "<<num.outcnt;
}
