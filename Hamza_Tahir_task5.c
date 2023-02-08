#include<stdio.h>
int main()
{

	float hours=5.5;
	int min= hours *60;
	printf("%.1f Hours in min = %d\n",hours,min);
	
	int sec = hours * 3600;
	printf("%.1f Hours in sec = %d",hours,sec);

	

	return 0;
}