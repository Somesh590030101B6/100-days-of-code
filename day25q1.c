#include <stdio.h>
int main()
{
    int n,i,m;
    printf("enter number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(m=i;m<=n;m++)
        {
            printf("%d",m);
        }
        printf("\n");
    }
    return 0;
}