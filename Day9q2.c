#include <stdio.h>
int main()
{
int a;
printf("enter grade:\n");
scanf("%d",&a);
if (a<=100 && a>=90){
printf("grade a\n");}
else if(a<=89 && a>=80){
printf("grade b\n");}
else if (a<=79 && a>=70){
printf("grade c\n");}
else if (a<=69 && a>=60){
printf("grade d\n");}
else if(a>100 || a<0){
printf("invalid no.\n");}
else{
printf("grade f\n");}
return 0;
}