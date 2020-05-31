#include <stdio.h>
#include<process.h>
#include<stdlib.h>
void push();
void pop();
void display();

struct Student
{
	char name[50];	
	int age;
};

struct Student arr[5];
int index=-1;   /*0 to 4*/


 void print()
 {
 	int i;
 	for(i=0;i<=index;i++)
 	{
 		printf("%s",arr[i].name);
 		printf("%d",arr[i].age);
 		printf("\n");
	}
 }
 
 void push(struct Student x)
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
	int ch;
	
	
	while(1)
	{
		printf("\n*** Stack Menu ***");
		printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
		printf("\n\nEnter your choice(1-4):");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: print();
					break;
			case 4: exit(0);
			
			default: printf("\nWrong Choice!!");
		}
	}
}
