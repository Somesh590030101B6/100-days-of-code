#include <stdio.h>
int main()
{
    int n,i,m;
    printf("enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        for(m=1;m<=i;m++)
        {
            printf("*\n");    
        }
        printf("\n");
    }
    for(i=n-2;i>=1;i-=2)
    {
        for(m=1;m<=i;m++)
        {
            printf("*\n");    
        }
        printf("\n");
    }
    return 0;
}