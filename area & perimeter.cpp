//find area and perimeter of circle after formalities
#include<stdio.h>
int main()
{
	int r;
	float area,perimeter;
	printf("Enter radius:");
	scanf("%d",&r);
	area=3.14*r*r;
	perimeter=2*3.14*r;
	printf("Area is %2f\n",area);
	printf("perimeter is %2f",perimeter);
	return 0;
}
