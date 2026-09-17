#include <stdio.h>
#include <math.h>
int main()
{
    int n,num;
    double i=0,s=0,r;
    printf("enter number:");
    scanf("%d",&n);
    num=n;
    while(num>0)
    {
        i=i+1;
        num=num/10;
    }
    num=n;
    while (num>0)
    {
        r=num%10;
        s=s+pow(r,i);
        num=num/10;
    }
    if (s==n)
    {
        printf("armstorng");
    }
    else if(s!=n)
    {
        printf("not armstrong");
    }
return 0;
}