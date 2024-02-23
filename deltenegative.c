#include <stdio.h>

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
    for (int i = 0; i < n; i++)
    {
        {
            if (a[i] < 0)
            {
             for(int k=i;k<n;k++)
             {
                a[k]=a[k+1];
             }
             n--;
             i--;
            }
        }
    }
    for(int i=0;i<n;i++)
    printf("%d",a[i]);
}