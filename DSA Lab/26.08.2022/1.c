#include <stdlib.h>
#include <stdio.h>
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
     node *head;
     int r,n;
     printf("How many nos ");
     scanf("%d",&r);
     head=NULL;
     while ( r != 0)
       {
	 printf("Enter no ");
	 scanf("%d",&n);
	 create_dbl(&head,n);
	 r--;
       }
     printf("\nThe double linklist is \n");
     disp(head);
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
     while( q != NULL)
       {
	  printf("%d   ",q->no);
	  q=q->next;
       }
   }
