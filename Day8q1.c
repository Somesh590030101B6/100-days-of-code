#include <stdio.h>
#include <ctype.h>
int main(){
char a;
printf("enter any character:");
scanf("%c",&a);

if (isupper(a)){
printf("upper case\n");}
else if (islower(a)){
printf("lower case\n");}
else if (isdigit(a)){
printf("digit\n");}
else {
printf("special character\n");}
return 0;
}