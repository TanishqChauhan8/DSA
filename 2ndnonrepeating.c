#include <stdio.h>
void duplicatedel(int[], int);

int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element into the array : ");
        scanf("%d", &a[i]);
    }
    duplicatedel(a, n);
    return 0;
}

void duplicatedel(int a[], int n)
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                a[j] = -1;
                a[i] = -1;
            }
        }
    }
      for(int i=0;i<n;i++)
      {
        if (a[i] != -1)
        {
            count++;
        }
        if (count == 2)
        printf("2nd non repeating element is %d", a[i]);
      }

}