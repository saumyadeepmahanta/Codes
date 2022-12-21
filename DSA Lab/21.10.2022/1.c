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
      int x;
      void addbst(node **r,int n);
      void inorder(node *s);
      void preorder(node *s);
      void postorder(node *s);
      void search(node *q);
      void max(node *s);
      void min(node *s);
      void del(node **s);
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
  again:
    printf("Enter menu option ");
    scanf("%d",&x);
  switch(x)
    {
      case 1:printf("The tree in inorder is-\n");
             inorder(root);
             printf("\n");
             goto again;
      case 2:printf("The tree in preorder is-\n");
             preorder(root);
             printf("\n");
             goto again;
      case 3:printf("The tree in postorder is-\n");
             postorder(root);
             printf("\n");
             goto again;
      case 4:search(root);
             printf("\n");
             goto again;
      case 5:max(root);
             printf("\n");
             goto again;
      case 6:min(root);
             printf("\n");
             goto again;
      case 7:del(&root);
             inorder(root);
             printf("\n");
             goto again;
      case 8:break;


    }
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
void preorder(node *s)
{
  if(s!=NULL)
    {
      printf("%d ",s->no);
      preorder(s->left);
      preorder(s->right);
    }
}
void postorder(node *s)
{
  if(s!=NULL)
   {
     postorder(s->left);
     postorder(s->right);
     printf("%d ",s->no);
   }
 }
 void max(node *s)
 {
   while(s->right!=NULL)
     s=s->right;
  printf("The maximun no is %d",s->no);
 }
 void min(node *s)
 {
   while(s->left!=NULL)
     s=s->left;
  printf("The smallest no is %d",s->no);
 }
void search(node *q)
{
  int sn;
  printf("enter no to be searched ");
  scanf("%d",&sn);
  int f;
  f=0;
  while(q != NULL)
    {
if(q->no==sn)
  {
     f=1;
     printf("Found ");
     break;
  }
if(sn<q->no)
  q=q->left;
else
  q=q->right;
    }
  if(f==0)
    printf("Not Found ");
}
void del(node **s)
{
  int sn;
  printf("enter no to be deleted ");
  scanf("%d",&sn);
  node *p,*q,*nw;
  if((*s)->no==sn)
    {
if((*s)->left==NULL && (*s)->right==NULL)
   {
     nw=*s;
     *s=NULL;
     free(nw);
   }
    }
  else
    {
 q=*s;
 while(q != NULL)
   {
     if(q->no==sn)
       {
   if(q->left==NULL && q->right==NULL)
      {
        if(sn<p->no)
      p->left=NULL;
        else
     p->right=NULL;
        nw=q;
        free(nw);
        break;
      }
       }
     if(sn<q->no)
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
    }
}
