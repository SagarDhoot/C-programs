#include <stdio.h>

int main()

{
	int i,j;
	char c[100];
	  	printf("Enter the string\n");
	
	scanf("%s",c);
	
	for(j=0; c[j] != '\0'  ;j++)
	{
		printf("the character entered by user is=%c\n",c[j]);
	}
	return 0;
	
}
