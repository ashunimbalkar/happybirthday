/* atrhmatic opretions by using function*/


#include<stdio.h>
#include<conio.h>
int sum(int a,int b)
{
return a+b;
}

	int div(int x,int y)
	{
	return x/y;
	}
		int mul(int a,int b)
		{
		return a*b;
		}
			int sub(int x,int y)
			{
				return x-y;
			}
	


int main()
{
int num1,num2,num3,num4,num5,num6;
printf("enter two number:");
scanf("%d%d",&num1,&num2);
	
	num3=sum(num1,num2);
	printf("\n sum is %d \n",num3);
		
		num4=div(num1,num2);
		printf("\n div is %d\n",num4);

			num5=mul(num1,num2);
			printf("\n mul is %d\n",num5);
				num6=sub(num1,num2);
				printf("\n sub is %d",num6);
return 0;
}

