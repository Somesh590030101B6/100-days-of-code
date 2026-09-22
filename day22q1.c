#include <stdio.h>
int main()
{
    int n,r,i,num,s=0,f=1;
    printf("enter number:");
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        for(i=1;i<=r;i++)
        {
            f*=i;
        }
        s+=f;
        f=1;
    }
    if(s==num)
    {
        printf("strong number\n");
    }
    else
    {
        printf("not strong number\n");
    }
    return 0;
}