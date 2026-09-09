#include <stdio.h>
int main()
{
int a,b,sum,dif,pro,quo;
printf("enter 2 numbers: \n");
scanf("%d %d",&a,&b);
sum=a+b;
dif=a-b;
pro=a*b;
quo=a/b;
printf("sum: %d\n",sum);
printf("difference: %d\n",dif);
printf("product: %d\n",pro);
printf("quotient: %d\n",quo);
return 0;
}