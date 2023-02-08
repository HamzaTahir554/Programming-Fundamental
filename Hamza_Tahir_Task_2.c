#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter First Integer : ");
	scanf("%d",&x);
	printf("Enter second Integer : ");
	scanf("%d",&y);
	
	if(x>y)
	{
		printf("%d First Integer is greater than second Integer %d",x,y);
	}
	else 
	{
		printf("%d Second Integer is greater than first integer %d",y,x);
	}
}