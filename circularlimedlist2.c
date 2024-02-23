#include<stdio.h>
#include<stdlib.h>
typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
}list;


list* insert(list *f,list *r)
{
 list *p;
 int x;
 printf("Enter the value : ");
 scanf("%d",&x);
 p=(list *)malloc(sizeof(list));
 p->data=x;
 p->next=f;
 if(f==NULL)
    r=f=p;
 else
 {
   r->next=p;
   r=p;
 }
  return r;
}

list* delete(list *f,list *r)
{
   list *temp=f;
   if(f==r && f!=NULL && r!=NULL)
   {
    f=r=NULL;
   }
   printf("Delete %d",temp->data);
   f=f->next;
   r->next=f;
   free(temp);
   return f;
}

void display(list *f,list *r)
{
  do
  {
    printf("%d\t",f->data);
    f=f->next;
  }while(f!=r->next);
}

int main()
{
    int x,ch;
    list *f=NULL,*r=NULL;
    do
    {
        printf("\nEnter 1 to insert\nEnter 2 to delete\nEnter 3 to display\nEnter 4 to exit:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                r=insert(f,r);
                if(f==NULL)
                    f=r;
                break;
            case 2:
                f=delete(f,r);
                break;
            case 3:
                display(f,r);
                break;
            case 4:
                printf("Exit......");
                break;
        }
    } while (ch!=4);
}