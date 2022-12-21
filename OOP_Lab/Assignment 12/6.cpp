#include<iostream>
using namespace std;
template<class T>
class A{
	T a,b;
	public:
		void get(T x,T y){
			a=x;
			b=y;
		}
		T sum(){
			return a+b;
		}
};
int main(){
	A<int> obj;
	obj.get(5,10);
	cout<<"Sum of the number is ";
	int s=obj.sum();
	cout<<s<<endl;
	return 0;
}
