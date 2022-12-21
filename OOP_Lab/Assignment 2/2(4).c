#include<stdio.h>
struct person
{
  int age;
  float weight;
};
int main()
{
  void disp(struct person *p);
  struct person p;
  printf("Enter age ");
  scanf("%d",&p.age);
  printf("Enter weight ");
  scanf("%f",&p.weight);
  disp(p);
  return 0;
}
void disp(struct person *p)
{
  printf("%d",p->age);
  printf("%f",p->weight);
}
