#include <stdio.h>


int main()
{
	int i,l,j;
	char c[1000];
	printf("Enter the string\n");
	gets(c);
	for(i=0;c[i]!='\0';i++)
	{
		l+=1;
	}
	for(j=l-1;j>=0;j--)
	{
		printf("%c",c[j]);
	}
	return 0;
}
	

