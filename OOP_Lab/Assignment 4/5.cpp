#include <iostream>
using namespace std;
class distance
{
    private:
    int feet,inch;
    public:

      void getdata()
        {
  	       cout<<"Enter height in feet and inches ";
  	       cin>>feet>>inch;
        }
      void show()
        {
  	      cout<<"Total Height "<<feet<<"  Feet and " <<inch<<" Inches ";
        }

      distance add(distance c1 ,distance c2);

};
class distance distance::add(distance c1,distance c2)
{
  class distance tmp;
  tmp.feet=c1.feet+c2.feet;
  tmp.inch=c1.inch+c2.inch;
  while(tmp.inch>=12)
    {
       tmp.feet++;
       tmp.inch-=12;
    }
 return(tmp);
}
 int main()
   {
     class distance c1;
     class distance c2,c3;
     c1.getdata();
     c2.getdata();
     c3=c3.add(c1,c2);
     c3.show();
     return 0;
   }
