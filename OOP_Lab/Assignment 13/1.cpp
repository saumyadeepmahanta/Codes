#include<iostream>
#include<fstream>
int main()
{
  fstream ofile;
  int roll,m1,m2,m3;
  char nm[20],gen[5];
  ofile.open("student.dat");
  cin>>roll;
  cin>>nm;
  cin>>gen;
  cin>>m1>>m2>>m3;
  ofile.put(roll);
  ofile.put(nm);
  ofile.put(gen);
  ofile.put(m1);
  ofile.put(m2);
  ofile.put(m3);
  ofile.close();
  return 0;
}
