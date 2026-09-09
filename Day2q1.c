#include <stdio.h>
int main()
{
int l,b,a,p;
printf("enter length and breadth:");
scanf("%d %d",&l,&b);
p=l+l+b+b;
a=l*b;
printf("perimeter: %d\n",p);
printf("area: %d\n",a);
return 0;
}