//write a program to count the number of characters in the string using array
#include <stdio.h>

int main()

{
	int i,j,space_counter=0;
	char c[1000];
	//here we have taken array size as 1000,it totally depends upon u that how much size u have to assign
	  	printf("Enter the string\n");
	  	//now enter the required string
	
	gets(c);
	
	for(i=0; c[i] !='\0';i++)
	{
		
		if(c[i] == ' ')
		{
		  space_counter+=1;
		}
	}
	//j=c[i]-space_counter;
	printf("No. of words=%d",space_counter+1 );	
	return 0;
}

