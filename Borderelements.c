#include <stdio.h>
#define ROW_SIZE 4
#define COLUMN_SIZE 4

	void input(int arr[ROW_SIZE][COLUMN_SIZE])
	{
		int i,j,k,l;
		printf("Enter %d numbers:\n",ROW_SIZE*COLUMN_SIZE);
		for(i=0; i<ROW_SIZE;i++)
		{
			for(j=0;j<COLUMN_SIZE;j++)
			{
			scanf("%d",&arr[i][j]);
			}
		}
	}
	void print(int arr[ROW_SIZE][COLUMN_SIZE])
	{
		int i=0, j=0;
		for(i=0; i<ROW_SIZE;i++)
		{
			for(j=0;j<COLUMN_SIZE;j++)
			{
				printf("%d\t",arr[i][j]);
			
			}
			printf("\n");	
		}	
	}
	
	void border(int arr[ROW_SIZE][COLUMN_SIZE])
	{
		int i=0,j=0;
		printf("\n\n");
		for(i=0; i<ROW_SIZE;i++)
		{
			for(j=0;j<COLUMN_SIZE;j++)
			{
				if(i==0||i==ROW_SIZE-1||j==0||j==COLUMN_SIZE-1)
				{
					printf("%d",arr[i][j]);
				}
				printf("\t");
			}
			printf("\n");
		}
	}
int main()
{
	int arr[ROW_SIZE][COLUMN_SIZE];
	input(arr);
	print(arr);
	border(arr);
	
	return 0;
}
