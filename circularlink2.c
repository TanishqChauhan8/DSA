#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int data;
    struct list *next;
} node;

node* insertfront(node *s,int x)
{
    node *temp=NULL;
    temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->next=s;
    if(s==NULL)
    s=temp;
    else
    {
        temp->next=s;
        s=temp;
    }
    return s;
}

node* insertrare(node *e,int x)
{
    node *temp=NULL;
    temp=(node*)malloc(sizeof(node));
    temp->data=x;
    temp->next=NULL;
    if(e==NULL)
        e=temp;
    else
    {
        e->next=temp;
        e=temp;
    }
    return e;
}


void display(node *s,int x)
{
    do
    {
        printf("%d ",s->data);
        s=s->next;
    }
    while(s!=NULL);
}

int main()
{
    int ch,x;
    node *s=NULL,*e=NULL;
    do
    {
       printf("\nEnter 1 to Insert from front\nEnter 2 to insert Rare\nEnter 3 Display: ");
       scanf("%d",&ch);
       switch(ch)
       {
        case 1:

            printf("Enter the Number to insert : ");
            scanf("%d",&x);
           s=insertfront(s,x);
            if(e==NULL)
                e=s;
            if(s==NULL)
                s=e;                
            break;

        case 2:

            printf("Enter the Number to insert : ");
            scanf("%d",&x);
            insertrare(e,x);
            if(s==NULL)
                s=e;
            if(e==NULL)
                e=s;
             break;

        case 3:
            display(s,x);
            break;

        case 4:
            printf("Exit.....");
       }
    } while (ch!=4);
    
}