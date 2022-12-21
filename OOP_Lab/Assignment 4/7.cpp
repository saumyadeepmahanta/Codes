#include<iostream>
#include<math.h>
using namespace std;
class dist
{
  private:
    int x1,x2,y1,y2,a,b;
    float c;
  public:
    void getdata()
    {
      cout<<"enter x coordinate of first point ";
      cin>>x1;
      cout<<"enter y coordinate of first point ";
      cin>>y1;
      cout<<"enter x coordinate of second point ";
      cin>>x2;
      cout<<"enter y coordinate of second point ";
      cin>>y2;
    }
    void calc()
     {
       a=(x2-x1);
       b=(y2-y1);
       c=pow(a,2)+pow(b,2);
       c=pow(c,0.5);
     }
     void show()
     {
       cout<<"the distance is "<< " "<<c<<"units";
     }
};
int main()
{
  dist xy;
  xy.getdata();
  xy.calc();
  xy.show();
  return 0;
}
