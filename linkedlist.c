#include <stdio.h>
#include<stdlib.h>
struct stack
{
    int val;
    struct stack *next;
} *temp = NULL, *top = NULL;

void push(int x)
{
    temp = (struct stack *)malloc(sizeof(struct stack));
    if (temp == NULL)
        printf("Unlocated");
    else 
    {
        temp->val = x;
        temp->next = top;
        top = temp;
    }
}

int pop()
{
    int y;
    if (top == NULL)
        y=-1;
    else
    {
        y=top->val;
        temp = top;
        top = top->next;
        free(temp);
    }
    return y;
}

void display()
{
    temp=top;
    while (temp != NULL)
    {
        printf("%d ", temp->val);
        temp = temp->next;
    }
}

int main()
{
    int ch, x;
    do
    {
        printf("\nEnter 1 to insert\nEnter 2 to delete\nEnter 3 to display : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter 1 to insert : ");
            scanf("%d", &x);
            push(x);
            break;

        case 2:
            x = pop();
            if(x!=-1)
                printf("%d is Deleted ",x);
            else
                printf("UnderFlow ");

            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exit......");
        }

    } while (ch != 4);
}