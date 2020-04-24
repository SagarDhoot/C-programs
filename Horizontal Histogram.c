

/*

*
*
* *
* *
* *
* *
- -
6 4

*/
#include <stdio.h>
void Histogram(int x)
{
	int i;
	printf("%d",x);
	for(i=0;i<x;i++)
	{
		printf("\n*");
	}
	printf("\n");
	printf("--\n"); 
	printf("%02d\n",x);
}
int main()
{
	int a,b;
	printf("Enter the number:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	Histogram(a);
	Histogram(b);
	return 0;
	
}
