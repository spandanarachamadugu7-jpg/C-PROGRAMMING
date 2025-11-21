//find largest number of two numbers using conditional operator
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the values of a and b:");
	scanf("%d%d",&a,&b);
	(a<b)?printf("%d is larger",a):printf("%d is larger",b);
	return 0;
}
