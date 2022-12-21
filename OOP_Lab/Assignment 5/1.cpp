#include<iostream>
using namespace std;
class first
{
  private:
    int a;
  public:
  void getdata()
    {
      cout<<"enter the no. ";
      cin>>a;
    }
  void show()
    {
      cout<<a;
    }
};

class second
{
  private:
     int b,tmp;
  public:
    void getdata()
    {
      cout<<"enter no. ";
      cin>>b;
    }
    void show()
    {
      cout<<b;
    }
  void swap(class first d1,class second d2)
  {
    tmp=d2;
    d2=d1;
    d1=tmp;
  }
  friend class first;
};
int main()
{
  class first d1;
  class second d2,d3;
  d1.getdata();
  d1.show();
  d2.getdata();
  d2.show();
  d3.swap(d1,d2);
  d2.show();
  d1.show();
  return 0;
}
