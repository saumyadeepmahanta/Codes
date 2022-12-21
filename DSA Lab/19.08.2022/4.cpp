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
  node *del_dup(node *head);
  node *head;
  head=(node *)malloc(sizeof(node));
  create(head);
  disp(head);
  printf("\n");
  head=del_dup(head);
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
node *del_dup(node *head)
{
  node *nw,*lst,*lst1;
  lst=head;
  while(lst->next!=NULL)
   {
     lst1=lst;
     while(lst1->next!=NULL)
   {
     if(lst->no==lst1->next->no)
      {
        nw=lst1->next;
        lst1->next=nw->next;
        free(nw);
      }
      lst1=lst1->next;
   }
   lst=lst->next;
 }
   return(head);
}
