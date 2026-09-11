#include <stdio.h>
int main()
{
    int n,s,i;
    s=0;
    printf("enter number:\n");
    scanf("%d",&n);
    for (i=1;i<=n;i+=2)
    {
        s+=i;
    }
    printf("sum is:%d\n",s);
return 0;    
}