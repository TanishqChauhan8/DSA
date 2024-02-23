#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int val;
    struct stack *next;
} 
*temp = NULL;
*top = NULL;

void push(int x)
{
    temp = (struct stack *)malloc(sizeof(struct stack));
    if(temp == NULL)
        printf("Unlocated");
    else
    {
        temp->val = x;
        temp->next =top;
        top=temp;
    }
}

void pop()
{
    if (top == NULL)
        printf("Underflow");
    else
    {
        printf("%d is deleted", top->val);
        temp == top;
        top = top->next;
        free(temp);
    }
}

void display()
{
    temp = top;
    while (temp != NULL)
    {
        printf("%d =]
        ", temp->val);
        temp = temp->next;
    }
}

int main()
{
    int x, ch;
    do
    {
        printf("\nEnter 1 to insert\nEnter 2 to Delete\nEnter 3 to display : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value of x : ");
            scanf("%d", &x);
            push(x);
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            printf("Exit.....");
        }
    } while (ch != 4);
}