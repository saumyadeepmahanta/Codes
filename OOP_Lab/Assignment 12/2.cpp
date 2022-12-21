#include<iostream>
using namespace std;
template<typename T1,typename T2>
void swap(T1 &a,T2 &b){
	T2 temp=b;
	b=a;
	a=temp;
}
int main(){
	int x;
	float y;
	cout<<"Enter an integer number:";
	cin>>x;
	cout<<"Enter a decimal number:";
	cin>>y;
	cout<<"Before swap x="<<x<<" y="<<y<<endl;
	swap<int,float>(x,y);
	cout<<"After swap x="<<x<<" y="<<y<<endl;
	return 0;
}
