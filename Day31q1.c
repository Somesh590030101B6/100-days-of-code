#include <stdio.h>
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter element%d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    int m;
    printf("enter element:");
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            printf("element present at index:%d",i+1);
            return 0;
        }
        else if(i==n-1)
        {
            printf("element not present");
        }
        
    }
    return 0;
}