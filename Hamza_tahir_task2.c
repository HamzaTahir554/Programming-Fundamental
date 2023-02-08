#include<stdio.h>
float angle(float a1,float a2);
int main()
{
	float a1=45, a2=90;
	float angle3 = angle(a1,a2);
	printf("Third angle of triangle : %.2f",angle3);
}
float angle(float a1,float a2){
	float a3 = 180-(a1+a2);
	return a3;
}
