#include <stdio.h>
int main()
{
    int a,b,hcf,i;
    printf("enter numbers:");
    scanf("%d %d",&a,&b);
    if (a>=b)
    {
        for(i=1;i<=b;i++)
        {
            if(a%i==0 && b%i==0)
            {
                hcf=i;
            }
        }
    }
    else if(a<=b)
    {
        for(i=1;i<=a;i++)
        {
            if(a%i==0 && b%i==0)
            {
                hcf=i;
            }
        }
    }
    else if(a<0 || b<0)
    {
        printf("numbers should be positive");
    }
    printf("hcf is:%d\n",hcf);
    return 0;
    
}