#include<iostream>
using namespace std;
template<class T>
class paired{
	T a,b;
	public:
		paired(T x,T y){
			a=x;
			b=y;
		}
		T get_max(){
			return (a>b)?a:b;
		}
};
int main(){
	int x,y;
	cout<<"Enter Number 1:";
	cin>>x;
	cout<<"Enter Number 2:";
	cin>>y;
	paired<int> obj(x,y);
	cout<<"Greater number among the 2 numbers is ";
	int s=obj.get_max();
	cout<<s<<endl;
	return 0;
}
