#include<iostream>
using namespace std;
class complex
{
   private:
   int x[10];
   int y[10];
   int i,j;
   public:
    void getdata()
     {
      for(i=0;i<10;i++)
       {
         cout<<"enter real part ";
         cin>>x[i];
         cout<<"enter imaginary part ";
         cin>>y[i];
       }
     }
   void show()
     {
      for(j=0;j<10;j++)
        cout<<x[j]<<" "<<"+"<<" "<<"i"<<y[j]<<"\n";
     }
 };
 int main()
 {
   complex c;
   c.getdata();
   c.show();
   return 0;
 }
