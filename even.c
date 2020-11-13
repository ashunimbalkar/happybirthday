/* find number even or odd by using bitwise operator*/

#include<stdio.h>
#include<conio.h>
int main()
{
int i;
printf("enter the number:");
scanf("%d",&i);
if(i & 1)
printf("%d number is odd",i);
else
printf("%d number is even",i);
return 0;
}