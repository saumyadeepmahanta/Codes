#include<iostream>
using namespace std;
template<typename T>
void sort(T *a,int &n){
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(a[i]>a[j]){
				T temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main(){
	int n=5;
	int arr[n];
	cout<<"Enter 5 elements into the array:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Array before sorting:";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	sort<int>(arr,n);
	cout<<"\nArray after sorting:";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
