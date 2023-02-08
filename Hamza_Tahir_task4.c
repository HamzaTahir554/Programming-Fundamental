#include<stdio.h>
int rows1,cols1,rows2,cols2;
int multiply();
int main()
{
	printf("Enter The Number of Rows And Colums For The First Matrix: ");
	scanf("%d %d",&rows1,&cols1);

	printf("Enter The Number of Rows And Colums For The Second Matrix: ");
	scanf("%d %d",&rows2,&cols2);
	
	multiply(rows1,cols1,rows2,cols2);
}
int multiply()
{
	int matrix1[rows1][cols1];
	int matrix2[rows2][cols2];
	int matrix3[rows2][cols2];
	int sum=0;
	if(cols1!=rows2)
	{
		printf("The matrices can't be multiplied with each other.\n");
	}
	else
	{
		printf("Enter Element for matrix 1:");
		for(int i=0; i<rows1; i++)
		{
			for(int j=0;j<cols1; j++)
			{
				scanf("%d",&matrix1[i][j]);
			}
		}
		
		printf("Enter Element for matrix 2:");
		for(int i=0; i<rows2; i++)
		{
			for(int j=0;j<cols2; j++)
			{
				scanf("%d",&matrix2[i][j]);
			}
		}
		
		printf("matrix 1:\n");
		for(int i=0; i<rows1; i++)
		{
			for(int j=0;j<cols1; j++)
			{
				printf("%d ",matrix1[i][j]);
			}
			printf("\n");
		}
		
		printf("matrix 2:\n");
		for(int i=0; i<rows2; i++)
		{
			for(int j=0;j<cols2; j++)
			{
				printf("%d ",matrix2[i][j]);
			}
			printf("\n");
		}
		
		
		for(int i=0; i<rows2; i++)
		{
			for(int j=0;j<cols2; j++)
			{
				for(int k=0;k<rows1; k++)
				{
					sum = sum+matrix1[i][k]*matrix2[k][j];
				}
				 matrix3[i][j] = sum;
				 sum=0;
			}			
		}
		
		printf("Product of the matrices:\n");  
	   for(int i=0; i<rows2; i++)
		{
			for(int j=0;j<cols2; j++)
			{
				printf("%d ",matrix3[i][j]);				
			}
			printf("\n");			
		}
    }

}
