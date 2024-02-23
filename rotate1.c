#include <stdio.h>

int main()
{
    int n, k=0,temp;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element into the array : ");
        scanf("%d", &a[i]);
    }
    printf("Enter how many times you want to rotate the array : ");
    scanf("%d", &k);
    while (k != 0)
    {
                 temp=a[0];
            for (int j = 0; j <n-1; j++){
                
                a[j] = a[j+1];    
                
            }
            a[n - 1] =temp ; 
            k--;

        }
    for (int i = 0; i < n; i++)
        printf("%d", a[i]);
}