#include <stdio.h>
int main()
{
int a,b,c;
printf("sides of triangle:\n");
scanf("%d %d %d",&a,&b,&c);
if (a==b && a==c){
printf("equilateral triangle\n");}
else if (a==b || a==c || b==c){
printf("isosceles\n");}
else{
printf("scalene\n");}
return 0;
}