// WAP to throw and handle 'array out of bound' exception
#include <iostream>
using namespace std;
int main()
{
    int arr[5], n;
    cout << "Enter elements- ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter index - ";
    cin >> n;
    try
    {
        if (n >= 5)
        {
            throw(5);
        }
        else
        {
            cout << arr[n] << " ";
        }
    }
    catch (int x)
    {
        cout << "\nArray out of bound" << endl;
    }
    return 0;
}
