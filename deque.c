#include<stdio.h>
#include<stdlib.h>

typedef struct Deque
{
    int data;
    struct Deque *next;
}D;

D *p=NULL,*Q=NULL;

D* insertf(int x,D *f)
{
    printf("Enter the value: ");
    scanf("%d",&x);
    
    p=(D*)malloc(sizeof(D));
    p->data=x;
    p->next=NULL;
    
    if(f==NULL)
        f=p;
    else
    {
        p->next=f;
        f=p;  
    }
    return f;
}

D* insertr(int x,D *r)
{
 printf("Enter the value: ");
 scanf("%d",&x);
 Q=(D*)malloc(sizeof(D));
 Q->data=x;
 Q->next=NULL;
 if(r==NULL)
    r=Q;
 else
 {
    r->next=Q;
    r=Q;
 }
 return r;
}

D* deletef(int x,D *f)
{
    D *temp=NULL;
    if(f==NULL)
      printf("Queue is Empty");
    else
    {
    temp=f;
    printf("Delete %d",temp->data);
    f=f->next;
    free(temp);
    }
    return f;
}

D* deleter(int x,D *r,D *f)
{
 D *temp1=f;
 
 while(temp1->next!=r)
    temp1=temp1->next;

 if(f==r)
 {
    printf("Delete %d",temp1->data);
    free(temp1);
    f=r=NULL;
 }

 else
 {
    printf("Delete %d",r->data);
    free(r);
    r=temp1;
    r->next=NULL;
 }
 return r;
}

void display(D *f,D *r)
{
  do
  {
   printf("%d ",f->data);
   f=f->next;
  } while (f!=NULL);
  
}


int main()
{
    int ch,x;
    D *f=NULL,*r=NULL;
    do
    {
        printf("\nEnter 1 to insert from front\nEnter 2 to insert from rare\nEnter 3 to delete from front\nEnter 4 to delete from rare\nEnter 5 to display\nEnter 6 to exit:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            f=insertf(x,f);
            if(r==NULL)
                r=f;
            break;

            case 2:
            r=insertr(x,r);
            if(f==NULL)
                f=r;
            break;

            case 3:
            f=deletef(x,f);
            break;

            case 4:
            r=deleter(x,r,f);
            break;

            case 5:
            display(f,r);
            break;

            case 6:
            printf("Exit........");
            break;
        }
    } while (ch!=6);
    
}