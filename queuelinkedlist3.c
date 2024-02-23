#include <stdio.h>
#include <stdlib.h>
typedef struct queue
{
    int data;
    struct queue *next;
} Q;

Q *P;

Q *insert(Q *F, Q *R, int X)
{
    P = (Q*)malloc(sizeof(Q));
    P->data = X;
    P->next = NULL;
    
    if (F == NULL)
        F = R = P;
    else
    {
        R->next = P;
        R = P;
    }
    return R;
}

Q *delete(Q *F, Q *R)
{
    Q *temp;
    temp = F;
    printf("Delete %d", temp->data);
    F = F->next;
    free(temp);
    return F;
}

void display(Q *F, Q*R)
{
    while(F->next!=NULL)
    {
        printf("%d ",F->data);
        F=F->next;
    }
}

int main()
{
    Q *R = NULL, *F = NULL;
    int ch, X;
    do
    {
        printf("\nEnter 1 to insert\nEnter 2 to Delete\nEnter 3 to Display\nEnter 4 to Exit:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter the Number you want to insert :");
            scanf("%d",&X);
            R = insert(F, R, X);
            if (F == NULL)
                F = R;
            break;
        case 2:
            F = delete (F, R);
            break;
        case 3:
            display(F, R);
            break;
        case 4:
            printf("Exit.............");
            break;
        }
    } while (ch != 4);
}