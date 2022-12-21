#include<iostream>
using namespace std;
template<typename T>
void search(T *a,int n){
	int flag=0;
	T key;
	cout<<"Enter the number to be searched:";
	cin>>key;
	for(int i=0;i<n;i++){
		if(a[i]==key){
			flag=1;
			cout<<"Number found at index "<<i<<endl;
			break;
		}
	}
	if(flag==0){
		cout<<"Number not found"<<endl;
	}
}
int main(){
	int arr[5];
	cout<<"Enter 5 elements into integer array:";
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	search<int> (arr,5);
}
