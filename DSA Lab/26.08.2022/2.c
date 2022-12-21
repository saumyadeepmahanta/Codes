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
     void exchange(node **s,int n);
     node *head;
     int r,n,n1;
     printf("How many nos ");
     scanf("%d",&r);
     n1=r;
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
     exchange(&head,n1);
     printf("\nThe linklist after swap is\n ");
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

   void exchange(node **s,int n)
   {
     int r;
     r=1;
     int tmp;
     node *q,*p;
     p=*s;
     q=*s;
     while(q->next!=NULL)
        {
          q=q->next;
        }
        while(r!=(n/2)+1)
        {
          tmp=p->no;
          p->no=q->no;
          q->no=tmp;
          p=p->next;
          q=q->prev;
          r++;
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
