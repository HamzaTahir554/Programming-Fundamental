#include<stdio.h>
float calculateAttendance (float classesAttended, float classesTotal);
int main()
{
	float total,attendant;
	printf("Total Classes :");
	scanf("%f",&total);
	
	printf("Attendant Classes :");
	scanf("%f",&attendant);
	
	calculateAttendance (attendant,total);
}
float calculateAttendance (float classesAttended, float classesTotal)
{
	float parcentage = classesAttended/classesTotal * 100;
	printf("Attendence Parcentage is : %f\n",parcentage);
	if (parcentage>=80 && parcentage<=100)
	{
		printf("You are allowed to sit in the exam");
	}
	else if(parcentage<80 && parcentage>=0)
	{
		printf("You are not allowed to sit in the exam");
	}
	else 
	{
		printf("Invalid Data");
		}	
}