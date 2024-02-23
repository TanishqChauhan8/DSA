#include<stdio.h>
int main()
{
    int n,freq=1;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
 {
    printf("enter the Element\n");
    scanf("%d",&a[i]);
 }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++ )
        {
            if(a[i]==a[j] && a[i]!=-9)
            {
                freq++;
                a[j]=-9;
            }
        }
         if(a[i]!=-9)
    printf("\nfrequency of %d is %d",a[i],freq);
    freq=1;
    }
}
