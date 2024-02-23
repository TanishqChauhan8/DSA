#include<stdio.h>
#include<stdlib.h>

typedef struct list
{
    int data;
    struct list *next;
}l;

l *s=NULL,*e=NULL;

void inserte(int x)
{
    l *p=NULL;
    p=(l*)malloc(sizeof(l));
    p->data=x;
    p->next=NULL;

    if(s==NULL)
        s=e=p;
    else
    {
        e->next=p;
        e=p;
    }
}

void inserts(int x)
{
    l *q=NULL;
    q=(l*)malloc(sizeof(l));
    q->data=x;
    q->next=NULL;

    if(s==NULL)
        s=e=q;
    else
    {
        q->next=s;
        s=q;
    }
}

void insertpos()
{
  int pos,x;
  printf("Enter the position where u want to insert : ");
  scanf("%d",&pos);

  printf("Enter the value to insert : ");
  scanf("%d",&x);

  l *t1=s;
    while(pos!=2)
    {
        t1=t1->next;
        pos--;
    }
   
   l *y=(l*)malloc(sizeof(l));
   y->data=x;
   y->next=t1->next;
   t1->next=y;

   printf("Inserstion Successfull ");
}

void deletepos()
{
    int val;
    printf("Enter the number which u  want  to delete : ");
    scanf("%d",&val);
    l *tp=s;
    l *tp1=NULL;
    l *tp2=NULL;
    while(tp->data!=val)
    {
        tp1=tp;
        tp=tp->next;
    }

    printf("%d is Deleted ",tp->data);
    tp1->next=tp->next;
    free(tp);
}


void deletes()
{
    l *temp=s;
    if(s==NULL)
        printf("Underflow ");
    else
    {
        printf("Delete %d",temp->data);
        s=s->next;
        free(temp);
    }
}

void deletee()
{
    if(s==NULL)
        printf("underflow ");
    else 
    {
        l *temp1=s;
        printf("Delete %d",e->data);

        while(temp1->next!=e)
            temp1=temp1->next;
    
        free(e);
        e=temp1;
        e->next=NULL;   
    }
}

void display()
{
    l *temp1=s;
    do
    {
        printf("%d ",temp1->data);
        temp1=temp1->next;   
    }while(temp1!=NULL);
}

void reverse()
{
    l *t1=s;
    while(t1->next!=e)
    {
        t1=t1->next;
    }
    s=e;
    s->next=temp;
}

int main()
{
    int ch,x;
    do
    {
     printf("\nEnter 1 to insert from end\nEnter 2 to insert from start\nEnter 3 to delete from start\nEnter 4 to delete from end\nEnter 5 to insert at specific pos\nEnter 6 to delete at specific pos\nEnter 7 to display: ");
     scanf("%d",&ch);
     switch(ch)
     {
        case 1:
        printf("Enter the value : ");
        scanf("%d",&x);
        inserte(x);
        break;
        
        case 2:
        printf("Enter the value : ");
        scanf("%d",&x);
        inserts(x);
        break;

        case 3:
        deletes();
        break;

        case 4:
        deletee();
        break;
        
        case 5:
        insertpos();
        break;
        
        case 6:
        deletepos();
        break;

        case 7:
        display();
        break;

        case 9:
        printf("Exit........");
        break;
     }
    } while (ch!=9);
    
}