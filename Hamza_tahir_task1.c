#include<stdio.h>
void temp();

int main(){
	temp();
}
void temp(){
	float c = 72.5;
	float f = (c*9/5)+32;
	printf("%.2f Celsius in Fahrenheit %.2f",c,f);
}
