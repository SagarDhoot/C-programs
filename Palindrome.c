#include <stdio.h>

int main()
{
	int length=0,i,end_index,start_index,error=0;
	char c[1000];
	printf("Enter the string\n");
	gets(c);
	//check for length
	for(i=0;c[i]!='\0';i++)
	{
		length+=1;
	}
		start_index=0;
		end_index=length-1;
	for(;start_index< length/2	 ;start_index++,end_index--)
	{
				//check whether the first and the last words are same and so on
		if(c[start_index]!=c[end_index])
			{
				error=1;
				break;
			}
	}
	
	if(error==0)
	printf("The string %s is Palindrome",c);
	else
	printf("The string %s is Not Palindrome",c);
}
	

