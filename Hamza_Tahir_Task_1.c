#include<stdio.h>
int main()
{
	printf("Enter Integer:");
	int i;
	scanf(" %d",&i);
	if(i%2 == 0)
	{
		printf("%d is an even number",i);
	}
	else 
	{
		printf("%d is an odd number",i);
	}
}
