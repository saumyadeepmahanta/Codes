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
  node *search(node *head);
  node *head;
  head=(node *)malloc(sizeof(node));
  create(head);
  disp(head);
  printf("\n");
  head=search(head);
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
node *search(node *head)
{
  int n,f;
  node *nw,*lst;
  nw=(node *)malloc(sizeof(node));
  printf("enter no to be searched ");
  scanf("%d",&n);
  lst=head;
  while(lst->next!=NULL)
   {
     if(lst->next->no==n)
      {
        nw->no=n;
        nw=lst->next;
        lst->next=lst->next->next;
        nw->next=head;
        break;

      }
      lst=lst->next;
   }
   return(nw);
}
