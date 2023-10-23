#include<stdio.h>
int main()
{
	int i,a,b,temp;
	printf("Enter the numbers:");
	scanf("%d%d",&a,&b);
	printf("Before swapping:a=%d,b=%d",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\nAfter swapping: a=%d, b=%d",a,b);
}
