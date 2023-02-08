#include<stdio.h>
int main()
{

	int feet = 5;
	int inches = feet * 12;
	printf("%d feet to inches = %d \n",feet,inches);
	
	float centi = feet * 30.48;
	printf("%d feet to centimeter = %.2f",feet,centi);
	

	
	return 0;
}