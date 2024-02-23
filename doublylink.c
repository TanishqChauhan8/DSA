#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int data;
    struct list *next;
    struct list *prev;
} l;

l *inserte(l *e, int x)
{
    l *p = NULL;
    p = (l *)malloc(sizeof(l));
    p->data = x;
    p->prev = NULL;
    p->next = NULL;

    if (e == NULL)
        e = p;
    else
    {
        e->next = p;
        p->prev = e;
        e = p;
    }
    return e;
}

l *inserts(l *s, int x)
{
    l *q = NULL;
    q = (l *)malloc(sizeof(l));
    q->data = x;
    q->next = NULL;
    q->prev = s;

    if (s == NULL)
        s = q;

    else
    {
        q->next = s;
        s->prev = q;
        s = q;
    }
    return s;
}

void display(l *s)
{
    l *temp = s;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != NULL);
}

void insertpos(l *s, int pos)
{
    int x;
    printf("Enter the NUmber u want to insert : ");
    scanf("%d", &x);
    l *temp = s;
    l *q = NULL;
    q = (l *)malloc(sizeof(l));
    while (pos != 2)
    {
        pos--;
        temp = temp->next;
    }
    q->data = x;
    q->prev = temp;
    q->next = temp->next;
    temp->next = q;
}

l *deletes(l *s)
{
    l *temp = s;
    if (s == NULL)
        printf("List is Empty");
    else
    {
        printf("Delete %d", temp->data);
        s = temp->next;
        free(temp);
    }
    return s;
}

l *deletee(l *e)
{
    l *temp = e;
    if (e == NULL)
        printf("List is Empty");
    else
    {
        printf("Delete %d", temp->data);
        e = temp->prev;
        e->next = NULL;
        free(temp);
    }
    return e;
}

void *deletepos(l *s, int pos)
{
    l *temp = s;
    l *temp1 = NULL;
    l *temp2 = NULL;
    while (pos != 2)
    {
        pos--;
        temp = temp->next;
    }
    temp1 = temp->next;
    temp2 = temp1->next;
    printf("Deleted %d", temp1->data);
    temp->next = temp2;
    temp2->prev = temp;
    free(temp1);
}

int main()
{
    int x, ch, pos;
    l *s = NULL, *e = NULL;
    do
    {
        printf("\nEnter 1 to insert from end\nEnter 2 to display\nEnter 3 to insert from start\nEnter 4 to insert at pos\nEnter 5 to delete start\nEnter 6 to delete from end\nEnter 7 to delete at specific position: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the Number to insert : ");
            scanf("%d", &x);
            e = inserte(e, x);
            if (s == NULL)
                s = e;
            break;

        case 2:
            display(s);
            break;

        case 3:
            printf("Enter the Number to insert : ");
            scanf("%d", &x);
            s = inserts(s, x);
            if (e == NULL)
                e = s;
            break;

        case 4:
            printf("Enter the position where u want to insert : ");
            scanf("%d", &pos);
            insertpos(s, pos);
            break;

        case 5:
            s = deletes(s);
            break;

        case 6:
            e = deletee(e);
            break;

        case 7:
            printf("Enter the position where u want to delete : ");
            scanf("%d", &pos);
            deletepos(s, pos);
            break;

        case 8:
            printf("Exit..........");
            break;
        }
    } while (ch != 8);
}