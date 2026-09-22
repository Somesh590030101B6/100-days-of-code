#include <stdio.h>
int main()
{
    int n,i;
    float s=1;
    printf("ente number:");
    scanf("%d",&n);
    for(i=3;i<(n*2);i+=2)
    {
        s=s + ((float)i/(float)(i+1));
    }
    printf("sum is:%.2f\n",s);
    return 0;
}