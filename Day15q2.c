#include <stdio.h>
int main()
{
    int r,num=0,i,n;
    printf("enter number:\n");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        num=(num*10)+r;
    }
    printf("reversed number is:%d\n:",num);
    return 0;
}