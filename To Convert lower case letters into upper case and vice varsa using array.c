#include <stdio.h>

int main()
{
	int i,flag;
	char c[1000];
	printf("Enter the string\n");
	scanf("%s",c);
	for(i=0; c[i] != '\0'  ;i++)
	{
		if(flag==1)
		{
			//Uppercase
			if(c[i]>='a' && c[i]<='z')
			{
				c[i]=c[i]-32;
			}
			flag=0;
		}
		else
		{
			//Lower
			if(c[i]>='A' && c[i]<='Z')
			{
				c[i]=c[i]+32;
			}
			flag=1;
		}		
	}
	printf("output:%s", c);
}
