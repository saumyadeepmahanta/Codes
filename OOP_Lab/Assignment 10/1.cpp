#include<iostream>
using namespace std;
class item{
	int item_no;
	int price;
	public:
		void get_data(){
			cout<<"enter the item number:";
			cin>>item_no;
			cout<<"enter the price of the item:";
			cin>>price;
		}
		void display(){
			cout<<"Item number:"<<item_no<<" Price:"<<price<<endl;
		}
};
int main(){
	item t;
	t.get_data();
	item *p=&t;
	cout<<"Displaying using object\n";
	t.display();
	cout<<"\nDisplaying using pointer to object\n";
	p->display();
}
