#include <stdio.h>
int main()
{
    int n,i,m;
    printf("enter number:");
    scanf("%d",&n);
    for(i=n;i>=1;i-=2)
    {
        for(m=i/2;m>=1;m--)
        {
            printf(" ");
        }
        for(m=n;m>=i;m--)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=3;i<=n;i+=2)
    {
        for(m=1;m<=i/2;m++)
        {
            printf(" ");
        }
        for(m=i;m<=n;m++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}