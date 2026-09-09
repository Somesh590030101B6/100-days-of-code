#include <stdio.h>
int main()
{
int c,s,d;
float p;
printf("input cost price and selling price:");
scanf("%d %d",&c,&s);
if (c>s){
d= c - s;
p=((float)d/c)*100;
printf("loss is :%.2f\n",p);
}
else if(c<s){
d= s - c;
p=((float)d/c)*100;
printf("profit is :%.2f\n",p);
}
else{
printf("no profit no loss\n");}
return 0;
}