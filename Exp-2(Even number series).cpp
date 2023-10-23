#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Even series:");
	for(i=2;i<=n;i+=2)
	{
		printf("%d ",i);
	}

}
