

/*

Write a program to find smallest number from given 5 number using array

*/
int main()
{
 	int x[5];
 	int i,y;
 	printf("Enter the number=\n");
 	
	for(i=0;i<5;i++)
 	{
 		 scanf("%d",&x[i]);
    }
    
    int option=0;
    printf("Enter what you want. Press 0 for smallest and non 0 for largest number:\n");
    scanf("%d", &option);
    
    y = x[0];
 	for(i=1;i<5;i++)
 	{
 		if(option == 0)
 		{
 			if(x[i] < y)
 				y=x[i];	
		}
		else
		{
			if(x[i] > y)
 				y=x[i];
		} 		
 	}
 	
	if(option == 0)
	{
		printf("The smallest number is=%d",y);
	}
	else
	{
		printf("The largest number is=%d",y);	
	}
 	
 	return 0;	
}


