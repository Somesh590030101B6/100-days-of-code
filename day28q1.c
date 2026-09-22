#include <stdio.h>
int main()
{
    int n,i,m;
    printf("enter number:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(m=2;m<=i;m++)
        {
            if(i%m==0)
            {
                break;
            }
            else if(m==i-1)
            {
                printf("prime:%d\n",i);
            }
        }
    }
    return 0;
}