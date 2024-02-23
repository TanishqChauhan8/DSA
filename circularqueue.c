#include <stdio.h>
#define max 4

int Enque(int r, int x, int queue[])
{
    r = (r + 1) % max;
    queue[r] = x;
    return r;
}

int Deque(int f, int r, int queue[])
{
    if (f == -1)
        printf("Underflow");
    else
    {
        printf("Delete %d", queue[f]);
        f = (f + 1) % max;
    }
    return f;
}

void display(int f, int r, int queue[])
{
    if (f == -1)
        printf("Queue is empty");
    else
    {
        if (f < r)
        {
            for (int i = f; i <= r; i++)
                printf("%d ", queue[i]);
        }
        
        if (r <= f)
        {
            for (int i = r; i < f; i++)
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
        printf("\nEnter 1 to push\nEnter 2 to pop\nEnter 3 to Display: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the value you want to push : ");
            scanf("%d", &x);
            r = Enque(r, x, queue);
            if (f == -1)
                f = r;
            break;
        case 2:
            if (f > r)
                f = -1;
            f = Deque(f, r, queue);
            break;
        case 3:
            display(f, r, queue);
            break;
        default:
            printf("Exit......");
            break;
        }
    } while (ch != 4);
}