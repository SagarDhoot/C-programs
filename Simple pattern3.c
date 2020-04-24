#include <stdio.h>
int main()
{
	int a=5;
	char c;
	printf("Enter the number of rows and Enter the character\n");
	scanf("%d %c",&a,&c);
	int i,j;
	for(i=1;i<=a;i++)
	{
		for(j=0;j<a;j++)
		{
			if(j<(a-i))
				printf(" ");
			else
				printf("%c",c); 
		}
		printf("\n");
	}
}		
