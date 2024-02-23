#include <stdio.h>
#include<stdlib.h>
typedef struct queue
{
    int data;
    struct queue *next;
}Q;

Q *F = NULL, *R = NULL, *p;

void insert()
{
    p = (Q *)malloc(sizeof(Q));
    if (p==NULL)
        printf("Memory Not Allocated ");
    else
    {
        int val;
        printf("Enter the value you wanted to insert : ");
        scanf("%d", &val);
        
        p->data=val;
        p->next=NULL;

        if(F==NULL)
            F=R=p;
        else
        {
            R->next = p;
            R = p;
        }
    }
}

void delete()
{
    if (F == NULL)
        printf("Queue is Empty");
    else
    {
        p=F;
        printf("\nDeleted %d ", p->data);
        F = F->next;
        free(p);
    }
}

void display()
{
    if (F == NULL)
        printf("Queue is empty");
    else
    {
        p=F;
        while(p!=NULL)
        {
            printf("%d ",p->data);
            p=p->next;
        }
    }
}

int main()
{
    int ch, v;
    do
    {
        printf("\nEnter 1 to push\nEnter 2 to pop\nEnter 3 to Display : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;

        case 2:
            delete();
            break;

        case 3:
            display();
            break;

        default:
            printf("Exit.........");
            break;
        }

    } while (ch != 4);
}