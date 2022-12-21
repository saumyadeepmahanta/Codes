#include<iostream>
using namespace std;
class stu
  {
    private:
     int rn,tm1,tm2,tm3,tm4,tm5;
     float percentage;
     char nm[20];
    public:
      getdata()
      {
        cout<<"enter name ";
        cin>>nm;
        cout<<"enter roll no ";
        cin>>rn;
        cout<<"enter marks ";
        cin>>tm1;
        cout<<"enter marks ";
        cin>>tm2;
        cout<<"enter marks ";
        cin>>tm3;
        cout<<"enter marks ";
        cin>>tm4;
        cout<<"enter marks ";
        cin>>tm5;
        percentage=(tm1+tm2+tm3+tm4+tm5)/5;
      }
      show()
      {
        cout<<nm<<" "<<rn<<" "<<tm1<<" "<<tm2<<" "<<tm3<<" "<<tm4<<" "<<tm5<<"\n";
        cout<<"percentage is "<<percentage;
      }
  };
  int main()
  {
    stu s1;
    s1.getdata();
    s1.show();
    return 0;
  }
