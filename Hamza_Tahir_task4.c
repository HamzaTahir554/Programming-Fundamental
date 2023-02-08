#include<stdio.h>
int main()
{
	int sec = 86400;
	float min = sec/60;
	printf("%d sec in min = %.2f mins \n",sec,min);
	
	float hours = sec/(3600);
	printf("%d sec in min = %.2f Hours\n",sec,hours);
	 
	float day = sec/(3600*24);
	printf("%d sec in day = %.2f Days\n",sec, day);	

	return 0;
}
