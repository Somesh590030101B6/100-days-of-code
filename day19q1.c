#include <stdio.h>
int main()
{
    int a,b,lcm=1,i;
    printf("enter numbers:");
    scanf("%d %d",&a,&b);
    while (a>1 || b>1)
    {
        for(i=2;i<=a;i++)
        {
            if(a%i==0 && b%i==0)
            {
                a=a/i;
                b=b/i;
                lcm=lcm*i;
            }
            else if(a%i==0)
            {
                a=a/i;
                lcm=lcm*i;
            }
        }
        for(i=2;i<=b;i++)
        {
            if(a%i==0 && b%i==0)
            {
                a=a/i;
                b=b/i;
                lcm=lcm*i;
            }
            else if(b%i==0)
            {
                b=b/i;
                lcm=lcm*i;
            }
        }
    }
    printf("lcm is:%d\n",lcm);

}