#include <stdio.h>
int main()
{
	int arr[9],arr1[3][3],i=0,j=0,k=0;
	printf("Enter the elements:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("The elements are:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\n Row wise \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arr[k]=arr1[i][j];
			k++;
		}		
	}
	for(k=0;k<9;k++)
		{
			printf("%d ",arr[k]);
		}		
	
}
