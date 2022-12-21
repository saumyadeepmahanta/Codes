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
      int x,c,z;
      c=0;
      void addbst(node **r,int n);
      void inorder(node *s);
      int count_leaf(node *r,int c);
      int no_nodes(node *r,int c);
      int sum_nodes(node *r,int s);
      int height(node *r);
      node *root;
      int r,n,r1;
      printf("How many nos ");
      scanf("%d",&r);
      r1=r;
      int c1,c2=0,i1=0,s,s1=0;
      int d[100];
      root=NULL;
      while(r != 0)
	{
	  printf("Enter no ");
	  scanf("%d",&n);
	  addbst(&root,n);
	  r--;
	}
  again:
    printf("Enter menu option ");
    scanf("%d",&x);
  switch(x)
    {
      case 1:printf("The tree in inorder is-\n");
             inorder(root);
             printf("\n");
             goto again;
      case 2:c=count_leaf(root,c);
             printf("%d",c);
             printf("\n");
             goto again;
      case 3:z=r1-c;
             printf("%d",z);
             printf("\n");
             goto again;
      case 4:c1=no_nodes(root,c1);
             printf("No of nodes %d ",c1);
             printf("\n");
             goto again;
      case 5:s=sum_nodes(root,s1);
             printf("%d",s);
             printf("\n");
             goto again;
      case 6:c2=height(root);
             printf("%d",c2);
             printf("\n");
             goto again;

     }
      return 0;
}
void addbst(node **r,int n)
  {
    node *p,*q,*nw;
    if(*r==NULL)
      {
	*r=(node *)malloc(sizeof(node));
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
int count_leaf(node *r,int c)
{
  if(r==NULL)
    return c;
  if(r->left==NULL && r->right==NULL)
    {
      c++;
      return c;
    }
  c=count_leaf(r->left,c);
  c=count_leaf(r->right,c);
  return c;
}
int no_nodes(node *r,int c)
{
  if(r==NULL)
    return c;
  else
    c++;
  c=no_nodes(r->left,c);
  c=no_nodes(r->right,c);
  return c;
}
int sum_nodes(node *r,int s)
{
  if(r==NULL)
     return s;
  else
    s=s+r->no;
  s=sum_nodes(r->left,s);
  s=sum_nodes(r->right,s);
  return s;
}
int height(node *r)
{
  int h;
  if(r==NULL)
     return 0;
  int left=height(r->left);
  int right=height(r->right);
  if(left>right){
     h=1+left;
  }
  else{
    h=1+right;
  }
  return h;
}
