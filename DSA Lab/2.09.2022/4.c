#include <stdlib.h>
#include <stdio.h>
struct stack
   {
      int no;
      struct stack *next;
   };
typedef struct stack node;
int main()
 {
      void push(node **s,int n);
      void disp(node *q);
      int pop(node **s);
      node *top,*topnew;
      int r,n,n1,s1;
      top=NULL;
      topnew=NULL;
      printf("How many nos ");
      scanf("%d",&r);
      n1=r;
      while(r != 0)
	 {
	    printf("Enter no ");
	    scanf("%d",&n);
	    push(&top,n);
	    r--;
	 }
   printf("The stack is-\n ");
      disp(top);
   while(n1!=0)
    {
      s1=pop(&top);
      push(&topnew,s1);
      n1--;
    }
    printf("\nThe stack in reverse is-\n ");
    disp(topnew);
    return 0;
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

void disp(node *q)
  {
     while(q != NULL)
	    {
	      printf("%d  ",q->no);
	      q=q->next;
	    }
  }
int pop(node **s)
{
  int a;
  node *nw;
  if(*s==NULL)
     printf("Stack is empty ");
  else{
    nw=*s;
    *s=nw->next;
    a=nw->no;
    free(nw);
  }
  return(a);
}
