#include <stdio.h>

int main()
{
	int i,l,j,a=0;
	char c[1000],input_char,req_char;
	printf("Enter the string\n");
	gets(c);
	
	printf("Enter character which need to be replace\n");
	scanf(" %c",&input_char);
	
	printf("Enter the character which is replacing another character\n");
	scanf(" %c",&req_char);
	
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]==input_char)
		{
			c[i]=req_char;
		
		}
	}
		printf("Output=%s",c);
		return 0;
}
