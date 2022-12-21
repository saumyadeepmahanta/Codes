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
    void push(node * *s, int n);
    void disp(node * q);
    void pop(node * *s);
    void push1(node * *s);
    void empty(node * s);
    node *top;
    int r, n;
    top = NULL;
    int x;
    printf("How many nos ");
    scanf("%d", &r);
    while (r != 0)
    {
        printf("Enter no ");
        scanf("%d", &n);
        push(&top, n);
        r--;
    }
again:
    printf("\nenter menu option ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        empty(top);
        printf("\n");
        goto again;

    case 2:
        disp(top);
        printf("\n");
        goto again;
    case 3:
        push1(&top);
        disp(top);
        printf("\n");
        goto again;
    case 4:
        pop(&top);
        disp(top);
        printf("\n");
        goto again;
    case5:
        break;
    }
    return 0;
}
void push(node **s, int n)
{
    node *nw;
    if (*s == NULL)
    {

        *s = (node *)malloc(sizeof(node));
        (*s)->no = n;
        (*s)->next = NULL;
    }
    else
    {
        nw = (node *)malloc(sizeof(node));
        nw->no = n;
        nw->next = *s;
        *s = nw;
    }
}

void disp(node *q)
{
    while (q != NULL)
    {
        printf("%d  ", q->no);
        q = q->next;
    }
}
void empty(node *s)
{
    if (s == NULL)
        printf("The stack is empty ");
    else
        printf("The stack is not empty ");
}
void push1(node **s)
{
    int n;
    printf("enter the no you want to insert in the stack ");
    scanf("%d",&n);
    node *nw;
    nw = (node *)malloc(sizeof(node));
    nw->no = n;
    nw->next = *s;
    (*s) = nw;
}
void pop(node **s)
{
    node *nw;
    if ((*s) == NULL)
    {
        printf("Stack is empty ");
    }
    else
    {
        nw = *s;
        (*s) = (*s)->next;
        free(nw);
    }
}
