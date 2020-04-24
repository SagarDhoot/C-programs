#include <stdio.h>

int main()
{
	int i,j;
	char c[10];
	int flag=1;
	for(i=0;i<5;i++)
	{
		if(flag==1)
		{
			printf("a");
			flag=0;
		}
		else
		{
			printf("b");
			flag=1;
		}
	}
}
