#include<stdio.h>
#include<stdlib.h>

typedef struct linkedlsint
{
    int data;
    struct linkedlist *next;
}list;
list *f=NULL,*r=NULL,*p=NULL;

void insert()
{
    int x;
    printf("Enter the value:");
    scanf("%d",&x);
    p=(list *)malloc(sizeof(list));
    p->data=x;
    p->next=f;

    if(f==NULL && r==NULL)
        f=r=p;
    else
    {
        r->next=p;
        r=p;
    }
}

void delete()
{
    list *temp=f;
    if(f==r && f!=NULL && r!=NULL)
        f=r=NULL;
    printf("Delete %d",temp->data);
    f=f->next;
    r->next=f;
    free(temp);
}

void display()
{
    do
    {
      printf("%d ",f->data);
      f=f->next;
    } while (f!=r->next); 
}

int main()
{
    int ch,x;
    do
    {
      printf("\nEnter 1 to insert\nEnter 2 to delete\nEnter 3 to display\nEnter 4 to exit: ");
      scanf("%d",&ch);
      switch(ch)
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
        case 4:
            printf("Exit........");
            break;
      }
    } while (ch!=4);
}