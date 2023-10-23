#include<stdio.h>
int main()
{
	int i,a,b,temp;
	printf("Enter the numbers:");
	scanf("%d%d",&a,&b);
	printf("Before swapping:a=%d,b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swapping:a=%d,b=%d",a,b);
}
