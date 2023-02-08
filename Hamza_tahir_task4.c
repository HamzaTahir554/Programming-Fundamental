#include<stdio.h>
int monthlyexp();
int yearlyexp();

int main()
{
	yearlyexp();
}

int monthlyexp()
{
	int loan = 5000;
	int insurence = 6000;
	int gas = 3000;
	int oil = 2500;
	int tires = 1500;
	int maintanance = 500;
	
	
	int mexp = loan + insurence + gas + oil + tires + maintanance;
	return mexp;
}
int yearlyexp()
{
	int mexp2 = monthlyexp();
	printf("Monthly Expence is : %d \n",mexp2);
	int yexp = 12 * mexp2;
	printf("Yearly Expence is : %d \n",yexp);
}
