#include<stdio.h>
int main()
{
	int i,n,c,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		c=i*i*i;
		sum=sum+c;
	}
	printf("Sum of series:%d",sum);
}
