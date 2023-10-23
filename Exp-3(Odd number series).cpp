#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Odd series:");
	for(i=1;i<=n;i+=2)
	{
		printf("%d ",i);
	}
}
