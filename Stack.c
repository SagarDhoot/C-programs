#include <stdio.h>

int arr[5];
int index=-1;   /*0 to 4*/

 
 void print()
 {
 	int i;
 	for(i=0;i<=index;i++)
 	{
 	printf("%d",arr[i]);
 	printf("\n");
	}
 }
 
 void push(int x)
 {
 	if(index==4)
 	{
 		printf("Stack overflowed\n");
 		printf("push index:%d\n",index);
	}
	else
	{
 		index++;
 		arr[index]=x;
 		printf("push index:%d\n",index);
 	}
}

 void pop()
 {
	if(index==-1)
	{
		printf("Stack is empty\n");
		printf("pop index:%d\n",index);
	}
	else
	{
		printf("Deleted element is %d\n",arr[index]);
		index--;
		printf("pop index:%d\n",index);
	}
 }


int main()
{
	push(10);
	push(20);
	print();   /*10,20*/
	pop();
	print();   /*10*/
	pop();
	pop();		/*underflow...*/
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);
	print();
	
}
