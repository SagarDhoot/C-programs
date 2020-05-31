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

void print(int arr[5])
{
	int i,s;
	for(i=0;i<5;i++)
	{
    	printf("%d, ",arr[i]);
	}
}


void input(int arr[5])
{
	int i,j,a;
	printf("Enter 5 elements:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
}

int main()
{
	int arr[5],choice;
	input(arr);
	printf("Enter your choice:\n1)Bubble sort\n2)Selection sort\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Bubble sort\n");
			bubble_sort(arr,0);
			break;
		case 2:
			printf("Selection sort\n");
			Selection_sort(arr,0);
			break;
			default:
				printf("Wrong input\n");
	}
	print(arr);
	return 0;
}

