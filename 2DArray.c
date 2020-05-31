#include <stdio.h>

int main()
{
	int arr[3][3],i,j;
	printf("Enter 9 numbers:");
	for(i=0; i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The Original matrix is:\n");
	for(i=0; i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
 	
//	for(i=0; i<3;i++)
//	{
//		for(j=0;j<3;j++)
//		{
//			arr[i][j]=arr[j][i];
//		}
//	}
	printf("Transpose matrix is:\n");
	
	
	for(i=0; i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr[j][i]);
		}
		printf("\n");
	}
	return 0;
}
