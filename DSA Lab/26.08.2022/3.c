#include<stdio.h>
#include<stdlib.h>
struct dlink
  {
    struct dlink *prev;
    int no;
    struct dlink *next;
  };
typedef struct dlink node;
int main()
{
  void create_dbl(node **s,int n);
  void disp(node *q);
  void check(node *q);
  void insert_beg(node **s);
  void insert_end(node **s);
  void insert_key(node **s);
  void del_beg(node **s);
  void del_end(node **s);
  void del_key(node **s);
  void count(node *s);
  void search(node *s);
  printf("********* DOUBLE LINKLIST **********\n");
  printf("Menu Options:- 1.)Traverse the link list 2.)check for null 3.)Insert at beginning,end and at key position 4.)Delete a node from beginning,end and at key position 5.)Count the no of nodes 6.)Search for a particular no.  7.)End\n\n");
  node *head;
  head=NULL;
  int x,r,n;
  again:
  printf("\nenter menu option ");
  scanf("%d",&x);

  switch(x)
  {
    case 1:printf("How many no.s ");
           scanf("%d",&r);
           while(r!=0)
            {
              printf("enter no. ");
              scanf("%d",&n);
              create_dbl(&head,n);
              r--;
            }
           printf("\n");
           printf("The linklist is: ");
           disp(head);
           goto again;
    case 2:check(head);
           printf("\n");
           goto again;
    case 3:insert_beg(&head);
           disp(head);
           printf("\n");
           insert_end(&head);
           printf("\n");
           disp(head);
           printf("\n");
           insert_key(&head);
           printf("\n");
           disp(head);
           printf("\n");
           goto again;
    case 4:del_beg(&head);
           printf("Elements after delete(Beg)\n");
           disp(head);
           printf("\n");
           del_end(&head);
           printf("Elements after delete(End)\n");
           disp(head);
           printf("\n");
           del_key(&head);
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
void create_dbl(node **s,int n)
{
   node *nw,*q;
   if(*s==NULL)
      {
         *s=(node *)malloc(sizeof(node));
        (*s)->prev=NULL;
        (*s)->no=n;
        (*s)->next=NULL;
      }
   else
      {
        q=*s;
        while(q->next != NULL)
             q=q->next;
        nw=(node *)malloc(sizeof(node));
        nw->no=n;
        nw->next=NULL;
        q->next=nw;
        nw->prev=q;
      }
}
void disp(node *q)
{
  while(q!=NULL)
    {
      printf("%d ",q->no);
      q=q->next;
    }
}
void check(node *q)
{
	if(q->no==0 && q->next==NULL)
	  printf("List is empty");
	else
	  printf("list is not empty");
}
void insert_beg(node **s)
{
	node *nw;
  nw=(node *)malloc(sizeof(node));
  printf("enter the no. to be inserted(Beg) ");
  scanf("%d",&nw->no);
  nw->prev=NULL;
  nw->next=*s;
  (*s)->prev=nw;
  *s=nw;
}
void  insert_end(node **s)
{
	node *nw,*q;
  q=*s;
  nw=(node *)malloc(sizeof(node));
  printf("enter the no. to be inserted(End)\n");
  scanf("%d",&nw->no);
  while(q->next!=NULL)
    q=q->next;
  q->next=nw;
  nw->next=NULL;
  nw->prev=q;
}
void insert_key(node **s)
{
  node *q,*nw;
  int n;
  nw=(node *)malloc(sizeof(node));
  int key;
  printf("enter key position ");
  scanf("%d",&key);
  q=*s;
  printf("enter no ");
  scanf("%d",&n);
    if(q->no==key)
      {
        nw->no=n;
        nw->next=q;
        q->prev=nw;
        nw->prev=NULL;
        *s=nw;
      }
    else
    {
      while(q->next!=NULL)
      {
         if(q->next->no==key)
             {
               nw->no=n;
               nw->next=q->next;
               nw->prev=q;
               q->next->prev=nw;
               q->next=nw;
               break;
             }
        q=q->next;
     }
  }
}
void del_beg(node **s)
{
  node *nw;
  nw=*s;
  (*s)=(*s)->next;
  (*s)->prev=NULL;
  free(nw);
}
void del_end(node **s)
{
  node *nw,*q;
  q=*s;
  while(q->next!=NULL)
    {
      q=q->next;
    }
  nw=q;
  q->prev->next=NULL;
  free(nw);
}
void del_key(node **s)
{
  node *nw,*q;
  q=*s;
  int key;
  printf("enter key position ");
  scanf("%d",&key);
  while(q->next!=NULL)
   {
     if(q->no==key)
       {
         nw=q;
         nw->next->prev=NULL;
         free(nw);
       }
    else
     {
       if(q->next->no==key)
        {
          nw=q->next;
          q->next=nw->next;
          nw->next->prev=q;
          free(nw);
          break;
        }
     }
     q=q->next;
   }
}
void count(node *s)
{
  int c;
  c=1;
  node *q;
  q=s;
  while(q->next!=NULL)
   {
     c++;
     q=q->next;
   }
   printf("The total no. of node is %d",c);
}
void search(node *s)
{
  int f=0;
  node *q;
  q=s;
  int n;
  printf("enter no. to be searched ");
  scanf("%d",&n);
  while(q!=NULL)
  {
    if(q->no==n)
    {
      f=1;
      printf("No. found ");
      break;
    }
    q=q->next;
  }
  if(f==0)
    printf("No. not found ");
}
