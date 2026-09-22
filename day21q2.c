#include <stdio.h>
int main()
{
    int n,p=1,i;
    printf("enter  number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            p+=i;
        }
        else
        {
            continue;
        }
    }
    if(p==n)
    {
        printf("perfect number\n");
    }
    else
    {
        printf("not perfect number\n");
    }
}