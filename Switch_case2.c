#include <stdio.h>
#include <math.h>

void number2qord(int x)
{
	switch(x)
	{
		case 0:
			printf("zero ");
			break;		
		case 1:
			printf("one ");
			break;
			
		case 2:
			printf("two ");
			break;
			
		case 3:
			printf("three ");
			break;
			
		case 4:
			printf("four ");
			break;
			
		case 5:
			printf("five ");
			break;	
		
		case 6:
			printf("six ");
			break;
		
		case 7:
			printf("seven ");
			break;
			
		case 8:
			printf("eight ");
			break;
			
		case 9:
			printf("nine ");
			break;
		
	}
}

int main()
{
	int num,a,i=1;
	int number[10];
	int k=0;
	printf("Enter a number\n");
	scanf("%d", &num);
	
	int num2 = num;
	
	for(i=num2;i>0;i=i/10)
	{
		int mod=i%10;
		number[k]=mod;
		k++;
	//	a=num2/(pow(10,i));
	//	int num2= (int)num2%(int)(pow(10,i));
	}
	//number2qord(a);
	k--;
	int m=k;
    for(m=k;m>=0;m--)
    {
    	number2qord(number[m]);
	}
/*	number2qord(num2/1000);
	num2 = num2%1000;
	number2qord(num2/100);
	num2 = num2%100;
	number2qord(num2/10);
	num2 = num2%10;
	number2qord(num2/1);
	printf("%d",l);*/
	return 0;
}
