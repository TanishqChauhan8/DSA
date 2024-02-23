#include<stdio.h>
#include<malloc.h>
typedef struct stack
{
    int val;
    struct stack *next;
}node;


node * push(int x,node *top)
{
    node *temp=(struct stack*)malloc(sizeof(node));
    if(temp==NULL)
       printf("Unlocated");
    else
    {
       temp->val=x;
       temp->next=top;
       top=temp;
    }
    return top;
}

node * pop(node *top)
{
    if(top==NULL)
    printf("stack is empty");
    else
    {
        node *temp=top;
        printf("delete %d",temp->val);
        top=top->next;
        free(temp);
    }
    return top;
}

void display(node *top)
{
    node *temp=top;
    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        temp=temp->next;
    }
}



int main()
{
    int ch,x;
    node *top=NULL;
 do
 {
   printf("\nEnter 1 to push\nEnter 2 to pop\nEnter 3 to display : ");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:
    printf("Enter  the Number to insert : ");
    scanf("%d",&x);
    top=push(x,top);
    break;

    case 2:
    top=pop(top);
    break;

    case 3:
    display(top);
    break;
   }

 } while (ch!=4);
}