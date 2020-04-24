#include <stdio.h>

int main()
{
	int i;
	char c[1000];
	printf("Enter the string\n");
	scanf("%s",&c[i]);
	for(i=0; c[i] != '\0'  ;i++)
	{
		if(c[i]>='a' && c[i]<='z')
		{
		c[i]=c[i]-32;
		}
	}
	printf("Uppercase letter is=%s",c);
	return 0;
	
}


