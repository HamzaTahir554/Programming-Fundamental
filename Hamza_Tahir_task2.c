#include<stdio.h>
int main()
{
	int weight = 58;
	float height = 1.65;
	float result = weight / (height * height);
	printf("Body mass Index : %.2f",result);

	return 0;
}