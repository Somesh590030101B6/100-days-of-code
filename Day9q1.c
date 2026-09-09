#include <stdio.h>
#include <math.h>
int main()
{
int a,b,c;
double d,e,f,g;
printf("enter numbers:");
scanf("%d %d %d",&a,&b,&c);
f=(b*b-4*a*c);
g=sqrt(f);
d=(-b + sqrt(f))/(2*a);
e=(-b - sqrt(f))/(2*a);
if ((b*b-4*a*c)<0){
printf("roots are complex");}
else if ((b*b-4*a*c)>0){
printf("roots are real and distinct:%.21f %.21f",d,e);}
else{
printf("roots are real and equal:%.21f %.21f",d,e);}
return 0;
}