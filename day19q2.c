#include <stdio.h>
int main()
{
    int n,s=0;
    printf("enter number:");
    scanf("%d",&n);
    while(n>0)
    {
        int r;
        r=n%10;
        n=n/10;
        s+=r;
    }
    printf("sum of digits is:%d\n",s);
}