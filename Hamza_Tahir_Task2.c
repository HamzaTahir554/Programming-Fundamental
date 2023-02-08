#include<stdio.h>
int main()
{
	int previous_bill_unit = 1500;
	int present_bill_unit = 2000;
	int per_unit_price = 5;
	
	int oct_bill_unit = present_bill_unit - previous_bill_unit;
	printf("OCTOBER Month Unit : %d",oct_bill_unit);
	
	int total_bill = oct_bill_unit * 	per_unit_price ;
	printf("\nTotal October Bill : %d",total_bill);
}
