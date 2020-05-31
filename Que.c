#include <stdio.h>

int arr[5];
int front=-1;
int rear=-1;  /*0 to 4*/

 
 void print()
 {
 	if(front==-1)
 	{
 		printf("Empty condition\n");
	}
	else
	{
		int i;
 		for(i=front;i<=rear;i++)
 		{
 			printf("%d",arr[i]);
		}
		printf("\n");
	}
 
 }
 
 void insert(int x)
 {
 	if(rear==4)
 	{
 		printf("Que is full\n");
	}
	else
	{
		if(front==-1)
		{
			front=rear=0;
		}
		else
		{
			rear++;
			arr[rear]=x;	
		}		
	}
 }

 void remove_from_que()
 {
 	if(front==-1)
 	{
 		printf("Underflow condition\n");
	}
	else
	{
		printf("Removed element is %d\n",arr[front]);
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front++;
		}	
	}
 }


int main()
{
	insert(10);
	insert(20);
	print();   /*10,20*/
	remove_from_que();
	print();   /*10*/
	remove_from_que();
	remove_from_que();		/*underflow...*/
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	insert(60);
	print();
	
}
