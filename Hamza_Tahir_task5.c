#include<stdio.h>
int main()
{


	int rows;
	printf("How many Rows: ");
	scanf("%d",&rows);
	
	for(int i=1; i<=rows; i++)
	{
		for(int j=1; j<=i; j++)
		{
			printf("*");
			
		}
		printf("\n");
	}
	int row=rows-1;
	for(int k=1; k<=row; k++)
	{
		for(int l=row; l>=k; l--)
		{
			printf("*");
		}
		printf("\n");
	}
}

