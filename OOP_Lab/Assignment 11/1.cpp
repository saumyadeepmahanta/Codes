#include<iostream>
using namespace std;
int main()
{
	float a,b;
	try
  {
		cout<<"enter the divident:";
		cin>>a;
		cout<<"enter the divisor:";
		cin>>b;
		if(b==0)
			throw(b);
		else
			cout<<"after dividing the numbers we get:"<<a/b;

	}
	catch(float b)
  {
		cout<<"Can not divide divisor is "<<b<<endl;
	}
}
