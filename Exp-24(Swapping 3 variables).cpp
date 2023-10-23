#include<stdio.h>
int main()
{
	int i,a,b,temp,c;
	printf("Enter the numbers:");
	scanf("%d%d%d",&a,&b,&c);
	printf("Before swapping:a=%d,b=%d",a,b);
	temp=a;
	a=b;
	b=c;
	c=temp;
	printf("\nAfter swapping: a=%d, b=%d, c=%d",a,b,c);
}
