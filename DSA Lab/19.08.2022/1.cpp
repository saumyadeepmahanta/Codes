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
  void check(node *lst);
  node *insert_beg(node *head);
  node *insert_end(node *head);
  node *insert_key(node *head);
  node *del_beg(node *head);
  void del_end(node *head);
  node *del_key(node *head);
  void count(node *head);
  void search(node *head);
  printf("Menu Options:- 1.)Traverse the link list 2.)check for null 3.)Insert at beginning,end and at key position 4.)Delete a node from beginning,end and at key position 5.)Count the no of nodes 6.)Search for a particular no.  7.)End\n\n");
  node *head;
  head=(node *)malloc(sizeof(node));
  int x;
  again:
  printf("enter menu option ");
  scanf("%d",&x);

  switch(x)
  {
    case 1:create(head);
           disp(head);
           printf("\n");
           goto again;
    case 2:check(head);
           printf("\n");
           goto again;
    case 3:head=insert_beg(head);
           disp(head);
           printf("\n");
           head=insert_end(head);
           printf("\n");
           disp(head);
           printf("\n");
           head=insert_key(head);
           printf("\n");
           disp(head);
           printf("\n");
           goto again;
    case 4:head=del_beg(head);
           printf("Elements after delete(Beg)\n");
           disp(head);
           printf("\n");
           del_end(head);
           printf("Elements after delete(End)\n");
           disp(head);
           printf("\n");
           head=del_key(head);
           disp(head);
           printf("\n");
           goto again;
   case 5: count(head);
           printf("\n");
           goto again;

  case 6: search(head);
          printf("\n");
          goto again;
  case 7: break;
  }

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
void check(node *lst)
{
	if(lst->no==0 && lst->next==NULL)
	  printf("List is empty");
	else
	  printf("list is not empty");
}
node *insert_beg(node *head)
{
	node *nw,*lst;
  nw=(node *)malloc(sizeof(node));
	printf("enter no to insert at the beginning ");
	scanf("%d",&nw->no);
	lst=head;
	nw->next=lst;
	return(nw);
}
node  *insert_end(node *head)
{
	node *nw,*lst;
	nw=(node *)malloc(sizeof(node));
	lst=head;
	printf("enter no. to insert at the end ");
	scanf("%d",&nw->no);
	while(lst->next!=NULL)
	{
		lst=lst->next;
	}
	lst->next=nw;
	nw->next=NULL;
	return(head);
}
node *insert_key(node *head)
{
  node *lst,*nw;
  nw=(node *)malloc(sizeof(node));
  int key;
  printf("enter key position ");
  scanf("%d",&key);
  lst=head;
  while(lst->next!=NULL)
  {
    if(lst->no==key)
     {
       nw=(node *)malloc(sizeof(node));
       printf("enter no to be inserted ");
       scanf("%d",&nw->no);
       nw->next=lst;
       break;
     }
    else
    {
      if(lst->next->no==key)
       {
         nw=(node *)malloc(sizeof(node));
         printf("enter no to be inserted ");
         scanf("%d",&nw->no);
         nw->next=lst->next;
         lst->next=nw;
         break;
       }
    }
     lst=lst->next;
  }
  return(head);
}
node *del_beg(node *head)
{
  node *nw;
  nw=head;
  head=head->next;
  free(nw);
  return(head);
}
void del_end(node *head)
{
  node *nw,*lst;
  lst=head;
  while(lst->next->next!=NULL)
    {
      lst=lst->next;
    }
    nw=lst->next;
    lst->next=NULL;
    free(nw);
}
node *del_key(node *head)
{
  node *nw,*lst;
  int key;
  lst=head;
  printf("enter key position ");
  scanf("%d",&key);
  while(lst->next!=NULL)
    {
      if(lst->no==key)
       {
         nw=lst;
         free(nw);
       }
      else
       {
         if(lst->next->no==key)
          {
            nw=lst->next;
            lst->next=nw->next;
            free(nw);
          }
       }
       lst=lst->next;
    }
    return(head);
}
void count(node *head)
{
  int c;
  c=1;
  node *lst;
  lst=head;
  while(lst->next!=NULL)
   {
     c++;
     lst=lst->next;
   }
   printf("The total no. of node is %d",c);
}
void search(node *head)
{
  int f=0;
  node *lst;
  lst=head;
  int n;
  printf("enter no. to be searched ");
  scanf("%d",&n);
  while(lst!=NULL)
  {
    if(lst->no==n)
    {
      f=1;
      printf("No. found ");
      break;
    }
    lst=lst->next;
  }
  if(f==0)
    printf("No. not found ");
}
