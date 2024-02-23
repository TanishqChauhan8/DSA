#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
   int data;
   struct queue *next;
} Q;

Q *Front = NULL, *Rare = NULL, *P;

void insert(Q *R, int x)
{
   P = (Q *)malloc(sizeof(Q));
   P->data = x;
   P->next = NULL;

   if (R == NULL)
      R = P;
   else
   {
      R->next = P;
      R = P;
   }
   Rare = R;
}

int delete(Q *F)
{
   int x=0;
   if (F == NULL)
      x=-1;
   else
   {
      Q *temp;
      temp = F->next;
      x=F->data;
      F = temp;
      free(temp);
   }
   return x;
}

void display(Q *F)
{
   while (F->next != NULL)
   {
      printf("%d ", F->data);
      F = F->next;
   }
}

int main()
{
   int ch, val, x;
   do
   {
      printf("\nEnter 1 to insert\nEnter 2 to Delete\nEnter 3 to Display: ");
      scanf("%d", &ch);
      switch (ch)
      {
      case 1:
         printf("Enter the Value you want to insert : ");
         scanf("%d", &x);
         insert(Rare,x);
         if (Front == NULL)
            Front = Rare;
         break;

      case 2:
         x= delete (Front);
         if(x==-1)
            printf("UnderFlow ");
         else  
            printf("%d is  deleted ",x);
         break;

      case 3:
         display(Front);
         break;

      default:
         printf("Exit............");
         break;
      }
   } while (ch != 4);

   return 0;
}