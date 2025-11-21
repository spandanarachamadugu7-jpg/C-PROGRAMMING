//Even or odd using conditional operator
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	(n%2==0)?printf("Even"):printf("odd");
	return 0;
}
