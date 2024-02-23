/*
Name: Tanishq Chauhan
University Roll no: 2021983
Section Roll no: 44
Section: IOT
1. Write a C program to Implement Circular queue using Call by Value method.
*/

#include <stdio.h>
#define max 5

int Enqueue(int r, int f, int x, int queue[])
{
    if ((r + 1) % max == f)
    {
        printf("Queue is full, cannot enqueue.\n");
    }
    r = (r + 1) % max;
    queue[r] = x;
    return r;
}

int Dequeue(int f, int r, int queue[])
{
    if (f == -1)
        printf("Underflow\n");
    else
    {
        printf("Deleted %d\n", queue[f]);
        if (f == r)
            f = r = -1;
        else
            f = (f + 1) % max;
    }
    return f;
}

void display(int f, int r, int queue[])
{
    if (f == -1)
        printf("Queue is empty\n");
    else
    {
        if (f <= r)
        {
            for (int i = f; i <= r; i++)
                printf("%d ", queue[i]);
        }
        else
        {
            for (int i = 0; i <= r; i++)
                printf("%d ", queue[i]);
            for (int i = f; i < max; i++)
                printf("%d ", queue[i]);
        }
    }
}

int main()
{
    int f = -1, r = -1, ch, x, queue[max];
    do
    {
        printf("\nEnter 1 to Enque\nEnter 2 to Deque\nEnter 3 to Display\nEnter 4 to    
        Exit: ");
        scanf("%d", &ch);
        switch (ch) {
        case 1:
            printf("Enter the value you want to push : ");
            scanf("%d", &x);
            r = Enqueue(r, f, x, queue);
            if (f == -1)
                f = 0;
            break;
        case 2:
            f = Dequeue(f, r, queue);
            break;
        case 3:
            display(f, r, queue);
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice.\n");
            break;
        }
    } while (ch != 4);
    return 0;
}
