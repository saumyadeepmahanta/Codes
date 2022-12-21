#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};
struct node * create(){
	int key;
	struct node *nw=(struct node *)malloc(sizeof(struct node));
	printf("\nenter the data to be inserted (press -1 to add no new node):");
	scanf("%d",&key);
	if(key==-1){
		nw=NULL;
		return nw;
	}
	else{
		nw->data=key;
		printf("enter the left child of %d",key);
		nw->left=create();
		printf("enter the right child of %d",key);
		nw->right=create();
		return nw;
	}
}
void preorder(struct node *h){
	if(h==NULL){
		return;
	}
	printf("%d ",h->data);
	preorder(h->left);
	preorder(h->right);
}
void postorder(struct node *h){
	if(h==NULL){
		return;
	}
	postorder(h->left);
	postorder(h->right);
	printf("%d ",h->data);
}
void inorder(struct node *h){
	if(h==NULL){
		return;
	}
	inorder(h->left);
	printf("%d ",h->data);
	inorder(h->right);
}
int main(){
	struct node *tree;
	tree=create();
	printf("\nbinary tree in preorder:\n");
	preorder(tree);
	printf("\nbinary tree in postorder:\n");
	postorder(tree);
	printf("\nbinary tree in inorder:\n");
	inorder(tree);
}
