#include <stdio.h>
int main()
{
    int n,i,p;
    p=1;
    printf("enter number:\n");
    scanf("%d",&n);
    for (i=2;i<=n;i+=2)
    {
        p=p*i;
    }
    printf("product is:%d\n",p);
return 0;    
}