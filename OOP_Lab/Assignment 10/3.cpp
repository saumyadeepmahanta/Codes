#include<iostream>
using namespace std;
class base{
	private:
		int base_var;
	public:
		void get_base(){
			cout<<"enter the value:";
			cin>>base_var;
		}
		void base_dis(){
			cout<<"Inside Base class\nData inserted:"<<base_var<<endl;
		}
};
class derived:public base{
	private:
		int derived_var;
	public:
		void get_derived(){
			cout<<"enter the value:";
			cin>>derived_var;
		}
		void derived_dis(){
			cout<<"Inside Derived class\nData inserted:"<<derived_var<<endl;
		}
};
int main(){
	derived d;
	derived *add=&d;
	cout<<"Getting data for base class using derived class pointer\n";
	add->get_base();
	add->base_dis();
	cout<<"Getting data for derived class using derived class pointer\n";
	add->get_derived();
	add->derived_dis();
}
