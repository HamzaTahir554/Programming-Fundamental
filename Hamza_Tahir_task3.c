#include <stdio.h>

int main()
{
   int i, choose;
   char str[100];

   printf("\nPlease enter a string:\t");
   gets(str);

   printf("\nPlease choose following options:\n");
   printf("1 = Encrypt the string.\n");
   printf("2 = Decrypt the string.\n");
   scanf("%d", &choose);
   if(choose==1)
   {
	for(i = 0; (i < 100 && str[i] != '\0'); i++) 
	{
		str[i] = str[i] + 3;
	}
      printf("\nEncrypted string: %s\n", str);   	
   }	

	else if(choose==2)
	{
		for(i = 0; (i < 100 && str[i] != '\0'); i++)
		{
			str[i] = str[i] - 3; 
		}
		printf("\nDecrypted string: %s\n", str);
	}
	else
	{
		printf("\Invalid Data\n");
	}
}
