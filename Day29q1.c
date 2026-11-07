#include <stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter element%d:",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("sum is:%d",sum);
    return 0;
}