#include <stdio.h>
int main()
{
    int n,b;
    printf("enter no. of units:\n");
    scanf("%d",&n);
    if(n<=100)
    {
        b=n*5;
        printf("bill:%d",b);
    }
    else if(n>100 && n<=200)
    {
        b= 500 + (n-100)*7;
        printf("bill:%d",b);
    }
    else if(n>200 && n<=300)
    {
        b= 500 + 700 + (n-200)*10;
        printf("bill:%d",b);
    }
    else if(n>300)
    {
        b= 500 + 700 +1000 + (n-300)*12;
        printf("bill:%d",b);
    }
    else 
    {
        printf("invalid input");
    }
return 0;    
}