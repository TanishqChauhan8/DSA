#include<stdio.h>
#define max 10

struct stack
{
    int val;
    struct stack *nxt;
}*temp=NULL,*top=NULL;

void push(int x)
{
    temp=(struct stack*)maloc(sizeof(struct stack));
    if(temp==NULL)
    printf("Unlocated");

    else
    {
        temp->val=x;
        temp->next=top;
        top=temp;
    }
}

void pop()
{
    if(top==NULL)
    printf("Undeflow");
    else
    {
        printf("%d is Deleted",top->val);
        temp=top;
        top=top->next;
        free(temp);
    }
}

void display()
{
    temp=top;
    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        temp=temp->next;
    }
}
void reverse()
{
    temp=top;
    
}

int main()
{
    int ch,x;
    do
    {
     printf("\nEnter 1 to insert\nEnter 2 to delete\nEnter 3 to display : ");
     scanf("%d",&ch);
     switch (ch)
     {
     case 1:
     push(x);
     break;

     case 2:
     pop();
     break;

     case 3:
     display();
     break;

     default:
     printf("Exit....");
     break;
     }

    } while (ch!=4);
    
}