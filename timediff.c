#include<conio.h>
#include<stdio.h>
int timediff(int time1,int time2)
{
int difference=time1-time2;
return difference;
}
int main()
{
struct typedef
{
int hours;
int minutes;
int seconds;
}
Time;
Time firsttime;
Time secondtime;
printf("time1");
scanf("%d:%d:%d",&firsttime.hours,&firsttime.minutes,&firsttime.seconds);
printf("time2");
scanf("%d:%d:%d",&secondtime.hours,&secondtime.minutes,&secondtime.seconds);
int firstfulltime=firsttime.hours,firttime.minutes,firsttime.seconds;
int secondfulltime=secondtime.hours,secondtime.minutes,secondtime.seconds;
timediff(firstfulltime,secondfulltime);
return 0;
