#include <stdio.h>
int main()
{
float r,a,c;
printf("enter radius:");
scanf("%f",&r);
a=3.14*r*r;
c=2*3.14*r;
printf("area: %.2f\n",a);
printf("circumference: %.2f\n",c);
return 0;
}