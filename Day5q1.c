#include <stdio.h>
int main()
{
float p,r,t,si;
printf("enter principal rate time(in years): \n");
scanf("%f %f %f",&p,&r,&t);
si=(p*r*t)/100.00;
printf("simple interest is: %.2f\n",si);
return 0;
}