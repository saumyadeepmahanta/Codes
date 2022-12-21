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
      node *root;
      int r,n,key,c=0,c1=0,l1=0,level;
      int count_key(node *r,int key,int c);
      int count_level(node *r,int c,int l,int level);
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
  inorder(root);
  printf("\nEnter key value ");
  scanf("%d",&key);
  c=count_key(root,key,c);
  printf("The no. of nodes greater than key are %d\n",c);
  printf("\nEnter the level from which you want to count ");
  scanf("%d",&level);
  l1=count_level(root,c1,l1,level);
  printf("\n%d",l1);
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
int count_key(node *r,int key,int c)
{
  if(r==NULL)
    return c;
  else{
    if(r->no>key)
      c++;
  }
  c=count_key(r->left,key,c);
  c=count_key(r->right,key,c);
  return c;
}
int count_level(node *r,int c,int l,int level)
{
  if(r==NULL)
    return l;
  else{
    if(c>=level)
      l++;
    c++;
  }
  l=count_level(r->left,c,l,level);
  l=count_level(r->right,c,l,level);
  return l;
}
