#include <stdio.h>
int main()
{
int a,b,c;
printf("enter 2 numbers:");
scanf("%d %d",&a,&b);
c=a;
a=b;
printf("swapped numbers are:%d %d\n",a,c);
return 0;
}