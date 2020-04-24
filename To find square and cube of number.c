
#include <stdio.h>

int main()
{
	
	int a=0;
	int e;
	int p;
    printf("Enter the number to be squared and cubed\n");
	scanf("%d", &a);
	int b=a*a;
	printf("The squared value is=%d\n",b);
	int d=a*a*a;
	printf("The cubed value is=%d\n",d);
	for(e=01;e<=10;++e)
	printf("%dx%02d=%02d\n",a,e,a*e);

	
	return 0;
}
