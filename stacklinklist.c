#include<stdio.h>
#include<malloc.h>
struct stack
{
    int val;
    struct stack *next;
};


struct stack* push(int x,struct stack *top)
{
    struct stack *temp=(struct stack*)malloc(sizeof(struct stack));
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

struct stack* pop(struct stack *top)
{
    if(top==NULL)
    printf("stack is empty");
    else
    {
        struct stack *temp=top;
        printf("delete %d",temp->val);
        top=top->next;
        free(temp);
    }
    return top;
}

void display(struct stack *top)
{
    struct stack *temp;
    temp=top;
    while(temp!=NULL)
    {
        printf("%d ",temp->val);
        temp=temp->next;
    }
}



int main()
{
    int ch,x;
    struct stack *top=NULL;
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