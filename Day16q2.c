#include <stdio.h>
int main()
{
    int n,s,r,num=0,i=1;
    printf("enter number:");
    scanf("%d",&n);
    s=n;
    while (s>0)
    {
        r=s%10;
        s=s/10;
        num=num*10+r;
        i=i*10;
    }
    printf("%d\n",num);
    if (n==num)
    {
        printf("pallindrome\n");
    }
    else if (n!=num)
    {
        printf("not pallindrome\n");
    }
    return 0;
}