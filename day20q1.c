#include <stdio.h>
int main()
{
    int n,s=1,c=0;
    printf("enter number:");
    scanf("%d",&n);
    while(n>0)
    {
        int r;
        r=n%10;
        n=n/10;
        if(r%2==0)
        {
            continue;
        }
        else if(r%2!=0)
        {
            s*=r;
            c+=1;
        }
    }
    if(c==0)
    {
        printf("product of odd digits is:0\n");    
    }
    else if(c!=0)
    {
        printf("product of odd digits is:%d\n",s);
    }
}