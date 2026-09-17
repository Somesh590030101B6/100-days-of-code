#include <stdio.h>
int main()
{
    int n,i;
    printf("enter number:");
    scanf("%d",&n);
    for (i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("not prime\n");
            break;
        }
        else if(n==(i+1))
        {
            printf("prime\n");
        }
    }
    return 0;
}