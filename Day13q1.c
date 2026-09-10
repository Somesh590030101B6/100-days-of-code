#include <stdio.h>
int main()
{
 char c;
 int a,b,f;
 printf("enter 2 numbers and a operator(+,-,*,/,%%):");
 scanf("%d %d %c",&a,&b,&c);
 switch(c)
 {
    case '+':
    printf("Result=%d",a+b);
    break;

    case '-':
    printf("Result=%d",a-b);
    break;

    case '*':
    printf("Result=%d",a*b);
    break;

    case '/':
    if(b!=0)
    {
        printf("Result=%.2f",(float)a/b);
    }
    else
    {
        printf("denominator cannot be 0");
    }
    break;

    case '%':
    if(b!=0)
    {
        printf("Result=%d",a%b);
    }
    else
    {
        printf("denominator cannot be 0");
    }
    break;

    default:
    printf("invalid operator");
 }
return 0; 
}