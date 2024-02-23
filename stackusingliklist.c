#include<stdio.h>
#include<stdlib.h>
struct stack
{
 int val;
 struct stack *next;
};
*temp=NULL;
*top=NULL;
void push(int x)
{
    int temp=(struct stack*)malloc(sizeof(struct stack));
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
    printf("Underflow");
    else
    {
        printf("Delete %d",top->val);
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
      printf("%d",temp->val);
      temp=temp->next;  
    }
}


int main()
{
   
}