#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int data;
    struct queue *next;
} Q;

Q *p;

Q *insert(Q *R, int x)
{
    p = (Q *)malloc(sizeof(Q));
    p->data = x;
    p->next = NULL;

    if (R == NULL)
        R = p;
    else
    {
        R->next = p;
        R = p;
    }
    return R;
}

Q *delete(Q *F)
{
    if (F == NULL)
        printf("Underflow");
    else
    {
        p=F;
        printf("Delete %d", F->data);
        F = F->next;
        free(p);
    }
    return F;
}

void display(Q *F)
{
    while(F!=NULL)
    {
        printf("%d ",F->data);
        F=F->next;
    }
}


int main()
{
    Q *F = NULL, *R = NULL;
    int ch, x;
    do
    {
        printf("\nEnter 1 to insert\nEnter 2 to delete\nEnter 3 to display\nEnter 4 to Exit: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value you want to insert : ");
            scanf("%d",&x);
            R = insert(R , x);

            if (F == NULL)
                F = R;
            break;

        case 2:
            F = delete(F);
            break;

        case 3:
            display(F);
            break;

        case 4:
            printf("Exit..............");
            break;
        }

    } while (ch != 4);
}