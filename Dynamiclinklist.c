#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int data;
    struct list *next
} list;

int main()
{
    list *P = NULL;
    list *L = NULL;
    list *R = NULL;
    int v, ch;
    printf("\nSelect 1 to enter elements in a linklist,2 to display and anyother key to exit: ");
    scanf("%d", &ch);
    while (ch == 1 || ch == 2)
    {
        if (ch == 1)
        {
            printf("Enter the value : ");
            scanf("%d", &v);
            P = (list *)malloc(sizeof(list));
            P->data = v;
            if (L == NULL && R == NULL)
                L = R = P;
            else
            {
                R->next = P;
                R = P;
            }
        }
        if (ch == 2)
        {
            while (L <= R)
            {
                printf("%d ", L->data);
                L++;
            }
        }
    }
}