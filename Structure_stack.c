#include <stdio.h>
 struct Student
 {
 	char name[50];
	int age;	
 };
 struct Student *arr[5];
 
 int index=-1;
 
 void print()
 {
 	int i=0;
 	for(; i<=index; i++)
 	{
 		//printf("SHRINIVAS %d\n", i);
 		printf("%s",arr[i]->name);	
 		printf("%d",arr[i]->age);
 		printf("\n");
	}
 }
 void push(struct Student *x)
 {
 	if(index==4)
 	{
 		printf("Sorry!!You can't insert any more\n");
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
	}
	else
	{
		printf("Removed/poped element is:%d\n",index);
		index--;
	}
 }
 int main()
 {
 	struct Student ABC = {"ABC ",10};
 	struct Student DEF = {"DEF ",20};
 	struct Student GHI = {"GHI ",30};
 	struct Student JKL = {"JKL ",40};
 	struct Student MNO = {"MNO ",50};
 	push(&ABC);
 	push(&DEF);
 
 	print();
 
 	pop();
 	pop();
 	pop();
 	print();
 	push(&ABC);
 	push(&DEF);
 	push(&GHI);
 	push(&JKL);
 	push(&MNO);
 	print();
 }
