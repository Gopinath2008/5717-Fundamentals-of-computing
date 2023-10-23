#include<stdio.h>
int main()
{
	int i,n,sum=0,c;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
		c=i*i;
		sum=sum+c;
	}
	printf("Sum of numbers:%d",sum);
}
