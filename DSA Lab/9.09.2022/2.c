#include <stdlib.h>
#include <stdio.h>
struct queue
  {
     int no;
     struct queue *next;
  };
typedef struct queue node;
int main()
   {

      void addque(node **f,node **r,int n);
      void disp(node *q);
      void enq(node **r);
      void del_que(node **f,node **r);
      void peek(node *f);
      void empty(node *f);
      node *front,*rear;
      int r,n,x;
      printf("How many nos ");
      scanf("%d",&r);
      front=rear=NULL;
      while(r != 0)
	 {
	    printf("Enter no ");
	    scanf("%d",&n);
	    addque(&front,&rear,n);
	    r--;
	 }
    again:
         printf("enter menu option ");
         scanf("%d",&x);
     switch(x)
       {
         case 1:disp(front);
                printf("\n");
                goto again;
        case 2: enq(&rear);
                disp(front);
                printf("\n");
                goto again;
        case 3: del_que(&front,&rear);
                disp(front);
                printf("\n");
                goto again;
        case 4: peek(front);
                printf("\n");
                goto again;
        case 5: empty(front);
                printf("\n");
                goto again;

        case 6: break;
       }
     return 0;
   }

void addque(node **f,node **r,int n)
  {
      node *nw;
      if(*f==NULL)
	 {
	   *f=(node *)malloc(sizeof(node));
	   (*f)->no=n;
	   (*f)->next=NULL;
	   *r=*f;
	 }
      else
	 {
	    nw=(node *)malloc(sizeof(node));
	    nw->no=n;
	    nw->next=NULL;
	    (*r)->next=nw;
	    *r=nw;
	 }
  }

  void disp(node *q)
    {
      while(q != NULL)
	 {
	    printf("%d  ",q->no);
	    q=q->next;
	 }
    }
void enq(node **r)
{
  node *nw;
  nw=(node *)malloc(sizeof(node));
  printf("enter no to be inserted ");
  scanf("%d",&nw->no);
  (*r)->next=nw;
  nw->next=NULL;
  *r=nw;
}
void del_que(node **f,node **r)
{
  node *nw;
  if(*f==NULL)
      printf("\nQueue is empty ");
  else{
    nw=*f;
    *f=nw->next;
    free(nw);
    if(*f==NULL)
      *r=NULL;
    }
  }
void peek(node *f)
{
  printf("the front no is %d ",f->no);
}
void empty(node *f)
{
  if((f)==NULL)
    printf("The queue is empty ");
  else
    printf("The stack is not empty ");
}
