#include <stdio.h>
int main()
{
    int r,num=0,i,n;
    printf("enter number:\n");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%2;
        n=n/2;
        num=num*10+r;
    }
    printf("binary number is:%d\n:",num);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        num=num*10+r;
    }
    printf("binary number is:%d\n:",num);
    return 0;
}