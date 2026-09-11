#include <stdio.h>
int main()
{
    int n,i,f;
    f=1;
    printf("enter number:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i+=1)
    {
        f=f*i;
    }
    printf("factorial is:%d\n",f);
return 0;    
}