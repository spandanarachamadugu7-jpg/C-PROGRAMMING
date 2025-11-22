//write a c program to celcius to fahrehiet
#include<stdio.h>
int main()
{
	float f,c;
	printf("Enter the temperature in celcius:");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("temp in fahrehiet:%f\n",f);
	return 0;
}
