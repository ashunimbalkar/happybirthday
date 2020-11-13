#include<stdio.h>
#include<conio.h>
int main()
{
int year;
printf("enter the year:");
scanf("%d",&year);
if(year%4==0)
{
if(year%100==0)
{
if(year % 400==0)
printf("is leaf year:");
else
printf("not leaf year:");
}
else
printf("is leaf year");
}
else
printf("is not");
return 0;
}