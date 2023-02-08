#include<stdio.h>
int age(int hamza,int jarrar,int uzair);
int main()
{
	int hamza,jarrar,uzair;
	printf("Enter Hamza age : ");
	scanf("%d",&hamza);
	printf("Enter Jarrar age : ");
	scanf("%d",&jarrar);
	printf("Enter Uzair age : ");
	scanf("%d",&uzair);
	age(hamza,jarrar,uzair);
}
int age(int hamza,int jarrar,int uzair)
{
	if(hamza>jarrar && hamza>uzair)
	{
		printf("Eldest Hamza  : %d age",hamza);
	}
	else if(jarrar> hamza && jarrar>uzair)
	{
		printf("Eldest Jarrar  : %d age",jarrar);
	}
	else if(uzair> hamza && uzair>jarrar)
	{
		printf("Eldest Uzair  : %d age",uzair);
	}
	else if(uzair==hamza && hamza&&uzair>jarrar)
	{
		printf("Eldest is hamza : %d and uzair : %d",hamza,uzair);
	}
	else if(uzair==jarrar && jarrar&&uzair>hamza)
	{
		printf("Eldest is jarrar : %d and uzair : %d",jarrar,uzair);
	}
	else if(jarrar==hamza && hamza&&jarrar>uzair)
	{
		printf("Eldest is hamza : %d and Jarrar : %d",hamza,jarrar);
	}
	else if(uzair==hamza && hamza&&uzair<jarrar)
	{
		printf("Eldest is Jarrar",jarrar);
	}
	else if(uzair==jarrar && jarrar&&uzair<hamza)
	{
		printf("Eldest is hamza",hamza);
	}
	else if(jarrar==hamza && hamza&&jarrar<uzair)
	{
		printf("Eldest is Jarrar",jarrar);
	}
}