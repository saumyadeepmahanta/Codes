#include <stdio.h>
#include <stdlib.h>
struct node
{
	 struct node *prev;
    int val;
    struct node* next;
};
void link(struct node *a,struct node *b){
	struct node *temp=a->next;
	struct node *t=b->prev;
	a->next=b;
	b->next=temp;
	b->prev=a;
	a->prev=t;
}
void swap(struct node *a){
    int n=1;
    struct node* current=a;
    while(current->next){
        n++;
        current=current->next;
    }
    struct node* temp[n];
    current=a;
    for(int i=0;i<n;i++){
        temp[i]=current;
        current=current->next;
    }
    for(int i=0;i<(n/2);i++){
    	link(temp[i],temp[n-1-i]);
    	link(temp[n-1-i],temp[i+1]);
    }
    temp[n/2]->next=NULL;
}
void create_dlink(node **s){
	int n;
	struct node *nw,*q;
	printf("how many inputs:");
	scanf("%d",&n);
	if(*s==NULL){
		nw=(node *)malloc(sizeof(node));
		printf("enter number:");
		scanf("%d",&nw->val);
		nw->prev=NULL;
		nw->next=NULL;
		*s=nw;
		n--;
	}
	while(n!=0){
		q=(node *)malloc(sizeof(node));
		printf("enter number:");
		scanf("%d",&q->val);
		q->next=NULL;
		nw->next=q;
		q->prev=nw;
		nw=q;
		n--;
	}
}
void display(struct node *p){
	while(p->next!=NULL){
		printf("%d ",p->val);
		p=p->next;
	}
	printf("%d\n",p->val);
}
int main(){
  node  *list=NULL;
	create_dlink(&list);
    display(list);
    swap(list);
    display(list);
    return 0;
}
