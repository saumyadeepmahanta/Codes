#include <stdlib.h>
#include <stdio.h>
struct bst
   {
      struct bst *left;
      int no;
      struct bst *right;
   };
typedef struct bst node;
int main()
   {
      void addbst(node **r,int n);
      void inorder(node *s);
      void pallindrome(node *r);
      node *root;
      int r,n;
      printf("How many nos ");
      scanf("%d",&r);
      root=NULL;
      while(r != 0)
	{
	  printf("Enter no ");
	  scanf("%d",&n);
	  addbst(&root,n);
	  r--;
	}
printf("The tree in inorder is-\n");
inorder(root);
printf("\npallindrome no.s are\n");
pallindrome(root);
return 0;
}
void addbst(node **r,int n)
  {
    node *p,*q,*nw;
    if(*r==NULL)
      {
	(*r)=(node *)malloc(sizeof(node));
	(*r)->left=NULL;
	(*r)->no=n;
	(*r)->right=NULL;
      }
    else
      {
	q=*r;
	while(q != NULL)
	  {
	    if(n<q->no)
	      {
		 p=q;
		 q=q->left;
	      }
	    else
	      {
		p=q;
		q=q->right;
	      }
	  }
	nw=(node *)malloc(sizeof(node));
	nw->left=NULL;
	nw->no=n;
	nw->right=NULL;
	if(n<p->no)
	  p->left=nw;
	else
	  p->right=nw;
      }
 }

void inorder(node *s)
  {
    if(s != NULL)
      {
	inorder(s->left);
	printf("%d  ",s->no);
	inorder(s->right);
      }
  }
void pallindrome(node *r)
{
  int rem,rv,c;
  c=r->no;
  rv=0;
  if(r==NULL)
  return ;
      while(c!=0)
         {
           rem=c%10;
           rv=10*rv+rem;
           c=c/10;
         }
      if(rv==r->no)
          printf("%d ",r->no);
  pallindrome(r->left);
  pallindrome(r->right);
  return ;
}
