#include <stdio.h>
void bubble_sort(int arr[5], int option)
{
	int i,j,a;
	int x;
	int y;
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
        {
        	if(option==0)
        	{
                if(arr[i]>arr[j]) 
                {
	                a=arr[i];
	                arr[i]=arr[j];
	                arr[j]=a;
                }
        	}
        	else
        	{
                if(arr[i]<arr[j]) 
                {
	                a=arr[i];
	                arr[i]=arr[j];
	                arr[j]=a;
                }
        	}	
		}
	}
}

void Selection_sort(int arr[5], int option)
{
	int i,j,a;
	int x;
	int y;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
        {
        	if(option==0)
        	{
                if(arr[i]>arr[j]) 
                {
	                a=arr[i];
	                arr[i]=arr[j];
	                arr[j]=a;
                }
        	}
        	else
        	{
                if(arr[i]<arr[j]) 
                {
	                a=arr[i];
	                arr[i]=arr[j];
	                arr[j]=a;
                }
        	}	
		}
	}
}

void print(int arr[5],int arr1[5])
{
	int i,s;
	for(i=0;i<5;i++)
	{
    	printf("%d, ",arr[i]);
	}
	for(i=0;i<5;i++)
	{
    	printf("%d, ",arr1[i]);
	}
}

void merge(int arr[5],int arr1[5],int arr2[10])
{
	int i=0,j=0,k=0;
	for(i=0,j=0;i<5,j<5;i++,j++)
	{
		if( arr[i] < arr1[j] )
			arr2[k++]=arr[i++];
		else
			arr2[k++]=arr1[j++];
	}
	for(i=0;i<5;i++)
	{
		arr2[k++]=arr[i++];
	}
	for(j=0;j<5;j++)
	{
		arr2[k++]=arr1[j++];
	}
}


void input(int arr[5],int arr1[5])
{
	int i,j,a;
	printf("Enter 5 elements of first array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter 5 elements of second array:\n");
	for(j=0;j<5;j++)
	{
		scanf("%d",&arr1[j]);
	}
}

int main()
{
	int arr[5],arr1[5],choice,arr2[10];
	input(arr,arr1);
	printf("Enter your choice:\n1)Bubble sort\n2)Selection sort\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Bubble sort\n");
			bubble_sort(arr,arr1,0);
			break;
		case 2:
			printf("Selection sort\n");
			Selection_sort(arr,arr1,0);
			break;
			default:
				printf("Wrong input\n");
	}
	print(arr,arr1);
	merge(arr,arr1,arr2);
	printf("\nMerged list : ");
	for(i=0;i<10;i++)
		printf("%d ",arr2[i]);
	printf("\n");
	return 0;
}

