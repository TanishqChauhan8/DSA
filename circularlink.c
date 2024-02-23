#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int data;
    struct list *next;
} l;

l *inserte(l *e, l *s)
{
    int x;
    printf("Enter the value to insert : ");
    scanf("%d", &x);
    l *p = NULL;
    p = (l *)malloc(sizeof(l));
    p->data = x;
    p->next = s;

    if (s == NULL)
        s = e = p;
    else
    {
        e->next = p;
        e = p;
    }
    return e;
}

l *inserts(l *s)
{
    int x1;
    printf("Enter the value to insert : ");
    scanf("%d", &x1);
    l *r = NULL;
    r = (l *)malloc(sizeof(l));
    r->data = x1;
    r->next = s;
    s = r;
    return s;
}

void insertpos(l *s)
{
    int pos, x;
    l *temp1 = s;
    l *temp2 = NULL;
    l *temp3 = NULL;
    temp3 = (l *)malloc(sizeof(l));
    printf("Enter the position where u want to insert : ");
    scanf("%d", &pos);

    printf("Enter the value to insert : ");
    scanf("%d", &x);
    temp3->data = x;

    while (pos != 2)
    {
        pos--;
        temp1 = temp1->next;
    }
    temp2 = temp1->next;
    temp1->next = temp3;
    temp3->next = temp2;
}

void display(l *s)
{
    l *temp = s;
    do
    {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != s);
}

l *deletes(l *s)
{
    l *temp = s;
    if (s == NULL)
        printf("Underflow");
    else
    {
        printf("Delete %d", temp->data);
        
        if(s==s->next)
            s=NULL;
        else 
            s = s->next;

        free(temp);
    }
    return s;
}

l *deletee(l *e, l *s)
{
    l *temp = s;
    if (e == NULL)
        printf("Underflow");
    else if(e->next==e)
    {
        printf("Delete %d", e->data);
        e=s=NULL;
    }
    else
    {
        while (temp->next != e)
            temp = temp->next;

        printf("Delete %d", e->data);
        free(e);
        e = temp;
        e->next = s;
    }
    return e;
}

l *deletepos(l *s)
{
    int pos;
    l *temp1 = s;
    l *temp2 = NULL;
    printf("Enter the position to delete : ");
    scanf("%d", &pos);
    while (pos != 2)
    {
        pos--;
        temp1 = temp1->next;
    }
    temp2 = temp1->next;
    temp1->next = temp2->next;
    printf("Delete %d", temp2->data);
    free(temp2);
}

int main()
{
    l *s = NULL, *e = NULL;
    int ch;
    do
    {
        printf("\nEnter 1 to insert from start\nEnter 2 to insert from end\nEnter 3 to delete from start\nEnter 4 to delete from end\nEnter 5 to insert at specific position\nEnter 6 to delete specific\nEnter 7 to display\nEnter 8 to exit:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            s = inserts(s);
            if (e == NULL)
                e = s;
            e->next=s;

            break;

        case 2:
            e = inserte(e, s);
            if(s==NULL)
                s=e;
            e->next=s;
            break;

        case 3:
            s = deletes(s);
            if(s==NULL)
                e=NULL;
            else
                e->next=s;

            break;

        case 4:
            e = deletee(e, s);
            if(e==NULL)
                s=NULL;
            break;

        case 5:
            insertpos(s);
            break;

        case 6:
            deletepos(s);
            break;

        case 7:
            display(s);
            break;

        case 8:
            printf("Exit............");
            break;
        }
    } while (ch != 8);
}