#include<stdio.h>
int main()
{
	float haider = 2.1;
	int a_hour = 2;
	int a_min = 30;
	
	int a_time = (a_hour*60) + a_min;
	a_time = a_time * 60;
	
	float haider_meter = haider*1000;
	
	float haider_speed = haider_meter/a_time;
	printf("Haider Covered %.2f km in %d hour and %d min with speed :%.2f m/sec\n",haider,a_hour,a_min,haider_speed);
	
	float ali = 3.1;
	int b_hour = 2;
	int b_min = 30;
	
	int b_time = (a_hour*60) + a_min;
	b_time = b_time * 60;
	
	float ali_meter = ali*1000;
	
	float ali_speed = ali_meter/b_time;
	printf("ali Covered %.2f km in %d hour and %d min with speed :%.2f m/sec",ali,b_hour,b_min,ali_speed);
		
}
