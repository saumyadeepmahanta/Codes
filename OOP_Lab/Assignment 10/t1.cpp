#include<iostream>
using namespace std;
class complex{
	float rl,img;
	public:
		void get_data(){
			cout<<"enter the real part:";
			cin>>rl;
			cout<<"enter the imaginary part:";
			cin>>img;
		}
		complex operator +(complex &c){
			complex c1;
			c1.rl=rl+c.rl;
			c1.img=img+c.img;
			return c1;
		}
		void display(){
			cout<<"real part:"<<rl<<" imaginary part:"<<img<<endl;
		}
};
int main(){
	complex c1,c2,c3;
	c1.get_data();
	c2.get_data();
	cout<<"complex number 1:";
	c1.display();
	cout<<"complex number 2:";
	c2.display();
	c3=c1+c2;
	cout<<"after adding the complex numbers we get:";
	c3.display();
}
