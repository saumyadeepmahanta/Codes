#include <stdio.h>
#include <stdlib.h>
struct cqueue
   {
      int no;
      struct cqueue *next;
   };
typedef struct cqueue node;
int main()
   {
      void addcque(node **f,node **r,int n);
      void disp(node *f);
      void del_que(node **f,node **r);
      void peek(node **f);
      void empty(node **f,node **r);
      node *front,*rear;
      int n,r;
      int x;
      int a;
      front=rear=NULL;
      printf("How many nos ");
      scanf("%d",&r);
      while(r != 0)
	 {
	     printf("Enter No ");
	     scanf("%d",&n);
	     addcque(&front,&rear,n);
	     r--;
  }
    again:
    printf("Enter menu option ");
    scanf("%d",&x);
    switch(x)
    {
      case 1:printf("Enter no to be inserted ");
             scanf("%d",&a);
             addcque(&front,&rear,a);
             disp(front);
             printf("\n");
             goto again;
      case 2:printf("Deque");
             del_que(&front,&rear);
             printf("\n");
             disp(front);
             printf("\n");
             goto again;
     case 3:peek(&front);
            printf("\n");
            goto again;
    case 4: empty(&front,&rear);
            printf("\n");
            goto again;
    case 5: break;

    }

      return 0;
   }
void addcque(node **f,node **r,int n)
   {
      node *nw;
      if(*f==NULL)
	 {
	   *f=(node *)malloc(sizeof(node));
	   (*f)->no=n;
	   (*f)->next=*f;
	   *r=*f;
	 }
      else
	 {
	   nw=(node *)malloc(sizeof(node));
	   nw->no=n;
	   nw->next=*f;
	   (*r)->next=nw;
	   *r=nw;
	 }
   }

void disp(node *f)
{
	node *q,*p;
	q=f;
	p=NULL;
	while(q != p)
	  {
	     printf("%d ",q->no);
	     q=q->next;
	     p=f;
	  }
  }
void del_que(node **f,node **r)
{
        node *nw;
        if(*f==NULL)
  	 printf("\nCqueue is empty");
        else
  	 {
  	    if((*f)->next==*f)
  	       {
  		  nw=*f;
  		  *f=*r=NULL;
  		  free(nw);
  	       }
  	       else
  		  {
  		      nw=*f;
  		      *f=nw->next;
  		      (*r)->next=*f;
  		      free(nw);
  		  }
  	 }
  }
  void peek(node **f)
  {
    printf("%d",(*f)->no);
  }
void empty(node **f,node **r)
{
  if(*f==NULL)
    printf("The queue is empty ");
  else
   printf("The queue is not empty ");
}
