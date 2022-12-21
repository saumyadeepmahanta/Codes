#include<iostream>
using namespace std;
class employee
 {
   private:
     struct emp
     {
       char nm[20];
       int empid;
       int age;
       int bp;
       float da;
       float hra;
       float gp;
     };
     int n,i;
     struct emp e[50];
   public:
     void getdata()
     {
       cout<<"enter the no. of employees ";
       cin>>n;
       for(i=0;i<n;i++){
       cout<<"enter employee id ";
       cin>>e[i].empid;
       cout<<"enter employee name ";
       cin>>e[i].nm;
       fflush(stdin);
       cout<<"enter age ";
       cin>>e[i].age;
       cout<<"enter basic salary ";
       cin>>e[i].bp;
     }
    }
    void calc()
    {
      for(i=0;i<n;i++)
       {
         e[i].da=e[i].bp*0.8;
         e[i].hra=e[i].bp*0.1;
         e[i].gp=e[i].bp+e[i].da+e[i].hra;
       }
    }
    void show()
    {
          cout<<"empid"<<"   "<<"name"<<"     "<<"age"<<"   "<<"basic salary"<<"       "<<"gross salary"<<"\n";
          for(i=0;i<n;i++)
          {
            cout<<e[i].empid<<"   "<<e[i].nm<<"      "<<e[i].age<<"         "<<e[i].bp<<"           "<<e[i].gp<<"\n";
          }
    }
 };
int main()
{
  employee em;
  em.getdata();
  em.calc();
  em.show();
  return 0;
}
