#include <stdio.h>
void printHistogram(int x)
{
	int b=0;
	printf("%02d : ", x);
	for(b=0;b<x;b++)

		printf("*");
	printf("\n");	
}

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	printf("Enter the number\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	printHistogram(a);
	printHistogram(b);
	printHistogram(c);
	printHistogram(d);
	printHistogram(e);
	
	return 0;
}
