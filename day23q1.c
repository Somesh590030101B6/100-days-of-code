#include <stdio.h>
int main()
{
    int n,i;
    float s=0;
    printf("enter number:");
    scanf("%d",&n);
    for(i=2;i<=(n*2);i+=2)
    {
        s=s+((float)i/(float)(i+(i-1)));
    }
    printf("sum is:%.2f\n",s);
    return 0;
}