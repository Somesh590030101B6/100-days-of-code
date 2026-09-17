#include <stdio.h>
int main()
{
    int r,num=0,i=1,n;
    printf("enter number:\n");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%2;
        n=n/2;
        num=num+(r*i);
        i=i*10;
    }
    printf("binary number is:%d\n:",num);
    return 0;
}