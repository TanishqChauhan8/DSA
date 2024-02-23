#include <stdio.h>
#include <stdlib.h>

typedef struct Queue
{
    int data;
    struct Queue *next;
} Q;

Q *temp = NULL, *F = NULL, *R = NULL;

void insert(int x)
{
    temp = (Q *)malloc(sizeof(Q));
    temp->data = x;
    temp->next = NULL;

    if (F == NULL && R == NULL)
        F = R = temp;
    else
    {
        R->next = temp;
        R = temp;
    }
}

void delete()
{
    printf("Delete %d", F->data);
    temp = F;
    F = F->next;
    R->next = F;
    free(temp);
}

void display()
{
    temp = F;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != NULL);
}

void reversqueue()
{
    Q *temp1 = F;
    Q *temp2 = NULL;
    Q *prev = NULL;
    while (temp1 != NULL)
    {
        temp2 = temp1->next;
        temp1->next = prev;
        prev = temp1;
        temp1 = temp2;
    }
    F = prev;
}

void alternate()
{
    Q *temp1 = F;
    while (temp1 != NULL )
    {
        if (temp1->next == NULL)
            break;
            
        else
        {
        Q *temp2 = temp1->next;
        temp1 = temp1->next->next;
        printf("Delete %d ", temp2->data);
        free(temp2);
        }
    }
}

void middle()
{
    Q *temp1 = F;
    Q *temp2 = F;
    int count=0;
    int c=1;
    while(temp2!=NULL)
    {
        temp2=temp2->next;
        count++;
    }

    if(count%2!=0)
    {
        count=count+1;
        count=count/2;
    }
    
    else
    count=count/2;

    while(c!=count)
    {
        temp1=temp1->next;
        c++;
    }
    
    printf("Middle - %d", temp1->data);
}

int main()
{
    int ch, x;
    do
    {
        printf("\nEnter 1 to insert\nEnter 2 to delete\nEnter 3 to display\nEnter 4 to reverse\nEnter 5 to print alternate Element\nEnter 6 to print middle node\nEnter 7 to Exit: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the number you want to insert : ");
            scanf("%d", &x);
            insert(x);
            break;

        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        case 4:
            reversqueue();
            break;
        case 5:
            alternate();
            break;
        case 6:
            middle();
            break;
        case 7:
            printf("Exit.................");
            break;
        }

    } while (ch != 7);
}