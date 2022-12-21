#include<iostream>
using namespace std;
class detail
  {
   private:
    char a[30];
   public:
     getdata()
      {
        cin>>a;
      }
      show()
      {
        cout<<"hello"<<" "<<a;
      }

  };
  int main()
  {
    detail nm;
    nm.getdata();
    nm.show();
    return 0;
  }
