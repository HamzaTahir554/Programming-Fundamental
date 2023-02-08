#include<stdio.h>
int reverse(int a);
int main()
{
	int a = 498;
	reverse(a);
}
int reverse(int a){
	int b=a/100;
	int c=a%100;
	int d=c/10;
	int e=c%10;
	
	int rev = (e*100) + (d*10) + (b*1);
	printf("%d reverse is %d",a,rev);
}
