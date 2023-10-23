#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)
	{
		sum=sum+i;
	}
	printf("Sum of even numbers:%d",sum);
}
