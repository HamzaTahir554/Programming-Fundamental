#include<stdio.h>
int main()
{
	float orignal_price = 500.0;
	float profit = 20.0/100*orignal_price;
	float selling_price = orignal_price+profit;
	printf("Orignal price : %.2f\n",orignal_price);
	printf("20 Parcent Profit : %.2f\n",profit);
	printf("Selling Price : %.2f\n",selling_price);
}
