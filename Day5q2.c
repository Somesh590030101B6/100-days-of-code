#include <stdio.h>
int main()
{
int time,hours,seconds;
float minute;
printf("enter time in seconds:\n");
scanf("%d",&time);
hours=time/3600;
minute=(time-hours*3600)/60;
seconds=time-minute*60-hours*3600;
printf("hours:%d\n",hours);
printf("minutes:%.2f\n",minute);
printf("seconds:%d\n",seconds);
return 0;
}