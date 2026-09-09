#include <stdio.h>
int main()
{
int d,p;
printf("enter no. of days:");
scanf("%d",&d);
if (d>0 && d<=5)
{
p=2*d;
printf("fine is ::%d\n",p);
}
else if(d>5 && d<=10){
p= 10 + 4*(d-5);
printf("fine is:%d\n",p);
}
else if (d>10 && d<=30)
{
p= 10 + 20 + 6*(d-10);
printf("fine is:%d\n",p);
}
else if (d<=0)
{
printf("invalid no.\n");
}
else{
printf("Membership Cancelled\n");
}
return 0;
}