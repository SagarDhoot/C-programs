#include <stdio.h>
struct Student
{
	char name[50];	
	int age;
};

	void print(struct Student *x)
	{
	int i;
	for(i=0;i<5;i++)
	{
		printf("Name:%s\n",x[i].name);
		printf("Age:%d\n",x[i].age);
	}
	}
	void input(struct Student *x)
	{
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%s",x[i].name);
		scanf("%d",&x[i].age);
	}
	}
	void oldest(struct Student *x)
	{
	int i,oldest=x[0].age;
	for(i=0;i<5;i++)
	{
		if(x[i].age>x[0].age)
		{
			oldest=x[i].age;
			
		}
	}
	printf("\nOldest student is:%d",oldest);
	} 
	void youngest(struct Student *x)
	{
	int i,youngest=x[0].age;
	for(i=0;i<5;i++)
	{
		if(x[i].age<x[0].age)
		{
			youngest=x[i].age;			
		}
	}
	printf("\nYoungest student is:%d",youngest);
	} 

int main()
{
	int i;
	struct Student students[5];
	input(students);
	print(students);
	oldest(students);
	youngest(students);
	return 0;
}
