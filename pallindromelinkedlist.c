#include<stdio.h>
#include<stdlib.h>

typedef struct Deque
{
    int data;
    struct Deque *next;
}D;

D *Q=NULL;
D* insert(int x,D *r)
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

void ispallindrome(D *f,D *r)
{
    D *t1=f; 
    D *t2=f;
    int count=0;
    while(t1!=r || t1->next!=r)
    {
        printf("\nLoop executed ");
        t2=t1;

        printf("\n%d -- %d",t1->data,r->data);
        if(t1->data!=r->data)
        {   
            count=1;
            break;
        }
        
        if(r->next!=t1 && r!=t1)
        { 
            while(t2->next!=r)
            {
                t2=t2->next;
                printf("%d ",count);
            }
        }

        if(r->next==t1 || r==t1)
            break;
      
        r=t2;
        t1=t1->next;
    }
    if(count==1)
       printf("\nnot pallindrome");
    else
        printf("\npallindrome"); 
}

void display(D *f)
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
        printf("\nEnter 1 to insert \nEnter 2 to check pallindrome\nEnter 3 to display\nEnter 4 to exit: ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
        r=insert(x,r);
        if(f==NULL)
            f=r;
        break;
        
        case 2:
        ispallindrome(f,r);
        break;

        case 3:
        display(f);
        break;

        case 4:
        printf("Exit........");
        break;
        }
    } while (ch!=4);
    
}