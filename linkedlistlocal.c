#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int data;
    struct list *next;
} l;

l* inserte(l *e)
{
    int x;
    printf("Enter the value to insert : ");
    scanf("%d", &x);
    l *p = NULL;
    p = (l *)malloc(sizeof(l));
    p->data = x;
    p->next = NULL;

    if (e == NULL)
    {
        e = p;
    }
    
    else
    {
        e->next = p;
        e = p;
    }
    return e;
}

l* inserts(l *s)
{
    int x1;
    printf("Enter the value to insert : ");
    scanf("%d", &x1);
    l *r = NULL;
    r = (l *)malloc(sizeof(l));
    r->data = x1;
    r->next = NULL;
    if(s==NULL)
        s = r;

    else
    {
        r->next=s;
        s=r;
    }
    return s;
}

void insertpos(l *s)
{
    int pos, x;
    printf("Enter the position where u want to insert : ");
    scanf("%d", &pos);

    printf("Enter the value to insert : ");
    scanf("%d", &x);

    l *t1 = s;
    while (pos != 2)
    {
        t1 = t1->next;
        pos--;
    }
    l *y = NULL;
    y = (l *)malloc(sizeof(l));
    y->data = x;
    y->next = t1->next;
    t1->next = y;
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

l* deletes(l *s)
{
    l *temp = s;
    if (s == NULL)
        printf("Underflow");
    else
    {
        printf("Delete %d", temp->data);
        s = s->next;
        free(temp);
    }
    return s;
}

l* deletee(l *e,l *s)
{
    l *temp=s;
    l *temp1=e;
    if(e==NULL)
        printf("Underflow");
    else
    {
        while(temp->next->next!=NULL)
            {
                temp=temp->next;
            }

            printf("Delete %d",temp1->data);
            free(temp1);
            e=temp;
            e->next=NULL;
    }
    return e;
}

l* deletepos(l *s)
{
    int pos;
    l *temp1=s;
    l *temp2=NULL;
    printf("Enter the position to delete : ");
    scanf("%d",&pos);
    while(pos!=2)
    {
        pos--;
        temp1=temp1->next;
    }
    temp2=temp1->next;
    temp1->next=temp2->next;
    printf("Delete %d",temp2->data);
    free(temp2);
}

void reverse(l *s,l *e)
{
    do
    {
    l *temp=s;
    while(temp->next!=e)
    {
        temp=temp->next;
    }
    prinf("%d ",e->data);
    free(e);
    e=temp;
    e->next=NULL;
    free(temp);
    }while(s!=NULL);
}

int main()
{
    l *s = NULL, *e = NULL;
    int ch;
    do
    {
        printf("\nEnter 1 to insert from end\nEnter 2 to insert from start\nEnter 3 to delete from start\nEnter 4 to delete from end\nEnter 5 to insert at specific position\nEnter 6 to delete specific\nEnter 7 to display\nEnter 8 to exit:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            e = inserte(e);
            if (s == NULL)
                s = e;
            break;

        case 2:
            s = inserts(s);
            if (e == NULL)
                e = s;
            break;

        case 3:
            s = deletes(s);
            break;

        case 4:
            e=deletee(e,s);
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