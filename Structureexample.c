   struct Student
{
	char name[50];	
	int age;
};

int main()
{
	int i,j;
	struct Student students[5];
	for(i=0;i<5;i++)
	{
		scanf("%s",&students[i].name);
		scanf("%d",&students[i].age);
		printf("Name:%s\n",students[i].name);
		printf("Age:%d\n",students[i].age);
	}

}
