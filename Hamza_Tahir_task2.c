#include<stdio.h>
#include<string.h>
int logic(char string[])
{
		char string2[100];
		printf("Enter Another String : ");
		gets(string2);
		strcat(string,string2);
		printf("Concatenate are : %s \n",string);	
}
int main()
{
	char string[100];
	int count_vowel=0;
	int count_consenont=0;
	printf("Enter String : ");
	gets(string);
	char select;
	printf("A) Count the number of vowels in the string\nB) Count both the vowels and consonants in the string\nC) Display the most frequent character in the string.\nD) Concatenate another string with the existing string.\nE) Exit the program.");
	while(select!='e' || select!='E')
	{
			
	printf("\nSelect Option: ");
	scanf("%c",&select);

	if(select=='a' || select=='A')
	{
		for(int i=0; string[i]!='\0'; i++)
		{
			if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u')
			{
				count_vowel++;
			}
		}
		printf("There are %d Vowels .\n",count_vowel);
	}
	else if(select=='b' || select=='B')
	{
		for(int i=0; string[i]!='\0'; i++)
		{
			if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u')
			{
				count_vowel++;
			}
			else 
			{
				count_consenont++;
			}
		}
		printf("There Are %d Vowles And %d consonants.\n",count_vowel,count_consenont);
	}
	else if(select=='c' || select=='C')
	{
			int count;
		   int maxCount = 0; 
		   char	frequent;
    		for(int i=0; string[i]!='\0'; i++)   
    		{
        		count = 1;
				for(int j =i+1; string[j]!='\0'; j++)  
        		{
            		if( string[j] == string[i])
                	count++;
					if(count > maxCount)
                    frequent = string[j];		
        		}
    		}
    		printf("Maximum times used element is : %c \n",frequent);		
	}
	else if(select=='D' || select=='d')
	{
		logic(string);
	}
	else if(select!='a' || select!='A' || select!='B' || select!='b' || select!='c' ||select!='C' || select!='e' || select!='E')
	{
		printf("\nInvalid Data\n");
	}
	}
	
}
