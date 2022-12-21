#include<iostream>
using namespace std;
template<typename T,int size>
void sort(T *a){
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(a[i]>a[j]){
				T temp= a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main(){
	int arr[5];
	cout<<"Enter 5 elements into the array:";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	cout<<"Array before sorting:";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	sort<int,5>(arr);
	cout<<"\nArray after sorting:";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
