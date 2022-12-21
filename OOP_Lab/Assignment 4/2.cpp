#include<iostream>
using namespace std;
class stu
  {
    private:
     int rn,tm;
     char nm[20];
    public:
      getdata()
      {
        cout<<"enter name ";
        cin>>nm;
        cout<<"enter roll no ";
        cin>>rn;
        cout<<"enter total marks ";
        cin>>tm;
      }
      show()
      {
        cout<<nm<<" "<<rn<<" "<<tm;
      }
  };
  int main()
  {
    stu s1;
    s1.getdata();
    s1.show();
    return 0;
  }
