#include<stdio.h>
#include<stdlib.h>
struct node
  {
    int no;
    struct node *next;
  };
int main()
{
  void create(node *lst);
  void disp(node *lst);
  void count(node *head);
  node *head;
  head=(node *)malloc(sizeof(node));
  create(head);
  disp(head);
  printf("\n");
  count(head);
  printf("\n");
  disp(head);
  return 0;
}
void create(node *lst)
{
  int r;
  printf("enter how many no.s ");
  scanf("%d",&r);
  while(r!=0)
    {
      printf("enter no. ");
      scanf("%d",&lst->no);
      r--;
      if(r==0)
        break;
      lst->next=(node *)malloc(sizeof(node));
      lst=lst->next;
    }
  lst->next=NULL;
}
void disp(node *lst)
{
  while(lst!=NULL)
    {
      printf("%d ",lst->no);
      lst=lst->next;
    }
}
void count(node *head)
{
  node *lst;
  lst=head;
  int c=0;
  int n;
  printf("enter the no whose no of occurences is to checked ");
  scanf("%d",&n);
  while(lst!=NULL)
   {
     if(lst->no==n)
      c++;
    lst=lst->next;
   }
   printf("the no of times %d occured is %d ",n,c);
}
