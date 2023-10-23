#include<stdio.h>
int main()
{
	int n,i,num,max;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter integer 1:");
	scanf("%d",&max);
	for(i=2;i<=n;i++)
	{
		printf("Enter integer %d:",i);
		scanf("%d",&num);
		if(num>max)
		{
			max=num;
		}
	}
	printf("Biggest number:%d\n",max);
}
