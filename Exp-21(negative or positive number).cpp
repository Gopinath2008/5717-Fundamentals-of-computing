#include<stdio.h>
int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	if(num>0)
	{
		printf("The given number is positive.\n");
	}
	else if(num<0)
	{
		printf("The given number is negative.\n");
	}
	else
	{
		printf("The number is equal to zero");
	}
}
