#include<stdio.h>
#include<math.h>
int main()
{
	int number,originalnumber,remainder,result=0,n=0;
	printf("Enter the number:");
	scanf("%d",&number);
	originalnumber=number;
	while(originalnumber!=0)
	{
		originalnumber=originalnumber/10;
		n++;
	}
	originalnumber=number;
	while(originalnumber!=0)
	{
		remainder=originalnumber%10;
		result=result+pow(remainder,n);
		originalnumber=originalnumber/10;
	}
	if(result==number)
	{
		printf("The given number is armstrong number.");
	}
	else
	{
		printf("The given number is not armstrong number.");
	}
}
