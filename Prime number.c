
#include <stdio.h>

int main()
{
	int input=0;
	printf("Enter the number=");
	scanf("%d",&input);
	if(input == 2 || input%2 != 0)
	{
		int checker=0;
		int notPrimeFlag=0;
		for(checker=3; checker<=input-1; checker++)
		{
			if(input%checker == 0)
			{
				notPrimeFlag=1;
				break;
			}
		}
		
		if(notPrimeFlag == 0)
		{
			printf("The number is prime");	
		}
		else
		{
			printf("The number is not prime");
		}
	}		
	else
	{
		printf("The number is not prime");
	}
	return 0;
}

