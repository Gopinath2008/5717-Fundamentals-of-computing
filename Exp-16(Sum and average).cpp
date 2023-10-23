#include<stdio.h>
int main()
{
	int i,n,sum=0;
	float avg;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	avg=sum/n;
	printf("Sum=%d",sum);
	printf("\nAverage=%.1f",avg);
}
