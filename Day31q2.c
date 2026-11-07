#include <stdio.h>
int main()
{
    int n,temp;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter element%d:",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-i-1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}