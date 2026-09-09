#include <stdio.h>
int main()
{
int a;
printf("enter no.:\n");
scanf("%d",&a);
if (a>0){
printf("positve\n");}
else if(a<0){
printf("negative\n");}
else{
printf("zero\n");}
return 0;
}