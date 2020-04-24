#include <stdio.h>

int main()

{
	int i,j;
	char c[5];
	  	printf("Enter the characters\n");
	for(i=0;i<5;i++)
	{
	scanf(" %c",&c[i]);
	}
	for(j=0;j<5;j++)
	{
		printf("the character entered by user is=%c\n",c[j]);
	}
	return 0;
	
}
