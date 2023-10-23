#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the number:");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("Maximum number is:%d",a);
	}
	else
	{
		printf("Maximum number is:%d",b);
	}
}
