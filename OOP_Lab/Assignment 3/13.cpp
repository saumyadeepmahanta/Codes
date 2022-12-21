#include<iostream>
using namespace std;
int main()
{
  void display(int a[],int n);
	int n;
	cout<<"How many inputs- ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
	cout<<"Array before swapping- " ;
	display(arr,n);
	for(int i=0;i<n-1;i+=2)
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
	cout<<"\nArray after swapping- " ;
	display(arr,n);
	return 0;
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
}
