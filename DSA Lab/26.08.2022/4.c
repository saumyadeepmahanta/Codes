//circular double linklist
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
     void create_cdbl(node **s,int n);
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
	 create_cdbl(&head,n);
	 r--;
       }
     printf("\nThe circular doubke linklist is :- \n");
     disp(head);
     return 0;
  }

  void create_cdbl(node **s,int n)
    {
       node *nw,*q;
       if(*s==NULL)
	 {
	   *s=(node *)malloc(sizeof(node));
	   (*s)->prev=*s;
	   (*s)->no=n;
	   (*s)->next=*s;
	 }
       else
	 {
	   q=*s;
	   while(q->next != *s)
	     q=q->next;
	   nw=(node *)malloc(sizeof(node));
	   nw->no=n;
	   nw->next=*s;
	   q->next=nw;
	   nw->prev=q;
	   (*s)->prev=nw;
	 }
    }

 void disp(node *s)
   {
     node *q,*p;
     q=s;
     p=NULL;


     while( q != p)
       {
	  printf("%d   ",q->no);
	  q=q->next;
	  p=s;
       }
   }
