#include <stdio.h>
int main()
{
	int a,c;
	printf("Enter the number of rows\n");
	scanf("%d",&a);
	int i,j;
	
	if(a%2 == 0)
		return 0;
		
	int space_count=0;
	int char_count=a;
	
	for(i=0;i<a/2+1;i++)
	{
		int b=1;
		
		for(j=0;j<a;j++)
		{
			if(j<space_count)
			{
				printf(" ");
			}
			else
			{
				printf("%d ",b);
				b++;
			}
		}
		printf("\n");
		space_count+=2;
	}
	
}
