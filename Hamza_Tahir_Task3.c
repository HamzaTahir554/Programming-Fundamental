#include<stdio.h>
int main()
{
	int meal_price = 150;
	float tax = 4.75/100 * meal_price;
	float total_meal_price = meal_price + tax;
	float tip = 10.0/100*total_meal_price;
	float total_bill = meal_price+tax+tip;
	
	printf("\nMeal Price : %d$",meal_price);
	printf("\n4.75 Parcent Tax : %0.2f$",tax);
	printf("\n10 Parcent Tip : %0.2f$",tip);
	printf("\nTotal Bill : %0.2f$",total_bill);
}
