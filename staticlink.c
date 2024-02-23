#include<stdio.h>
#include<stdlib.h>

struct list
{
 int data;
 struct list *next;  
};

struct list x1;
struct list x2;
struct list x3;

int main()
{
 struct list *p=NULL;
 p=&x1; 
 x1.data=10;
 x2.data=20;
 x3.data=30;

 x1.next=&x2;
 x2.next=&x3;
 x3.next=NULL;

 while(p!=NULL)
 {
    printf("%d ",p->data);
    p=p->next;
 }
 printf("%d ",p->data);

}