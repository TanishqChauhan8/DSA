#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int val;
    struct stack *nxt;
};
*top=NULL;
*Temp=NULL;

void push(int x)
{
    Temp=(struct stack*)malloc(sizeof(struct stack));
    if(Temp==NULL)
    printf("Unlocated");

    else
    {
    Temp->val=x;
    Temp->nxt=top;
    top=Temp;
    }
}

int pop()
{
    int y;
    if(top==NULL)
      y=-1;
    else
    {
        y=top->val;
        Temp=top;
        top=Temp->nxt;
        free(Temp);
    }
    return y;
}

void display()
{
  Temp=top;
  while(Temp!=NULL)
  {
    printf("%d ",Temp->val);
    Temp=Temp->nxt;
  }
}

int main()
{
    int x,ch;
    do
    {
     pritnf("\nEnter 1 to push\nEnter 2 to pop\nEnter 3 to Display: ");
     scanf("%d",&ch);
     switch(ch)
     {
        case 1:
        printf("Enter the Number you want to insert : ");
        scanf("%d",&x);
        push(x);
        break;

        case 2:
        pop();
        break;

        case 3:
        display();
        break;

     }
    } while (ch!=4);
    
}