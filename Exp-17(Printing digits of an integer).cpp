#include<stdio.h>
#include<stdlib.h>
void printdigits(int num)
{
	int digit;
	num=abs(num);
	while(num>0)
	{
		digit=num%10;
		printf("%d ",digit);
		num=num/10;
	}
}
int main()
{
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	printf("Printing digits of the number:");
	printdigits(number);
	return 0;
}
