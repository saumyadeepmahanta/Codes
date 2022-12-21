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
      int del_que(node **f,node **r);
      void push(node **s,int n);
      int pop(node **s);
      node *front,*rear,*top,*front1,*rear1;
      top=NULL;
      int r,n,n1,n2,n3,n4;

      printf("How many nos ");
      scanf("%d",&r);
      n2=r;
      n3=r;
      front=rear=NULL;
      front1=rear1=NULL;
      while(r != 0)
	 {
	    printf("Enter no ");
	    scanf("%d",&n);
	    addque(&front,&rear,n);
	    r--;
	 }
     disp(front);
    while(n2!=0)
      {
        n1=del_que(&front,&rear);
        push(&top,n1);
        n2--;
      }
    printf("\nThe queue in reverse is-\n");
    while(n3!=0)
       {
         n4=pop(&top);
         addque(&front1,&rear1,n4);
         n3--;
       }
    disp(front1);
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
int del_que(node **f,node **r)
{
  int a;
  node *nw;
  nw= *f;
  a=nw->no;
  *f=nw->next;
  free(nw);
  if(*f==NULL)
     *r=NULL;
  return(a);
}
void push(node **s,int n)
{
      node *nw;
      if(*s==NULL)
	{
	   *s=(node *)malloc(sizeof(node));
	   (*s)->no=n;
	   (*s)->next=NULL;
	}
      else
	{
	  nw=(node *)malloc(sizeof(node));
	  nw->no=n;
	  nw->next=*s;
	  *s=nw;
	}
}
int pop(node **s)
{
  int a;
  node *nw;
  if ((*s) == NULL)
  {
      printf("Stack is empty ");
  }
  else
  {
      nw = *s;
      a=(*s)->no;
      (*s) = (*s)->next;
      free(nw);
  }
  return(a);
}
