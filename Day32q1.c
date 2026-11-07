#include <stdio.h>
int main()
{
    int n,m;
    printf("enter size of array 1 and 2:");
    scanf("%d %d",&n,&m);
    int a[n],b[m];
    for(int i=0;i<n;i++)
    {
        printf("enter element%d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(int i=0;i<m;i++)
    {
        printf("enter element%d:",i+1);
        scanf("%d",&b[i]);
    }
    int c[n+m];
    for(int i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        c[n+i]=b[i];
    }
    for(int i=0;i<n+m;i++)
    {
        printf("%d\t",c[i]);
    }
    return 0;
}