#include<stdio.h>
float pi_size()
{
	float d = 6;
	float r = d/2;
	float pi_area = (3.14 )*(r*r);
	return pi_area;
}
int main(){
	float pisize = pi_size();
	float slice_area = 14.125;
	int no_slices = pisize/slice_area;
	printf("NUmber of pizza slices : %d",no_slices);
}

