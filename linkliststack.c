#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int val;
    struct stack *next;
}*temp=NULL,*top=NULL;

void push(struct stack *t,int x)
{
    temp=(struct stack *)malloc(sizeof(struct stack));
    if(temp==NULL)
        printf("Unlocated");
    else
    {
        temp->val=x;
        temp->next=t;
        t=temp;
    }
    top=t;
}

void pop(struct stack *t)
{
    if(t==NULL)
        printf("Underflow");
    else
    {
        temp=t;
        printf("Delete %d",temp->val);
        t=t->next;
        free(temp);
    }
    top=t;
}

void display(struct stack *t)
{
   if(t==NULL)
   printf("stack does not exist");
   else
   {
    while(t!=NULL)
    {
    printf("%d ",t->val);
    t=t->next;
    }
   }
}


int main()
{
 int ch,x;
 do
 {
   printf("\nEnter 1 to push\nEnter 2 to pop\nEnter 3 to display : ");
   scanf("%d",&ch);
   switch(ch)
   {
    case 1:
    printf("Enter  the Number to insert : ");
    scanf("%d",&x);
    push(top,x);
    break;

    case 2:
    pop(top);
    break;

    case 3:
    display(top);
    break;
   }

 } while (ch!=4);
 
}