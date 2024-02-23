#include<stdio.h>

int main()
{
 int n;
 printf("Enter the size of the array : ");
 scanf("%d",&n);
 int a[n];

 for(int i=0;i<n;i++)
 {
    printf("Enter element into the array : ");
    scanf("%d",&a[i]);
 }

 for(int i=0;i<n;i+=2)
 {
    for(int j=i+1;j<n;j++)
    {
        a[j]=a[j+1];
        break;
    }
 }

 for(int i=0;i<n;i++)
 {
    for(int j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            for(int k=i;k<n-1;k++)
            a[k]=a[k+1];

            n--;
            i--;
        }
    }
 }
 for(int i=0 ;i<n;i++)
 printf("%d",a[i]); 
}