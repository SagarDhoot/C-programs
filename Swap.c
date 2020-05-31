void swap(int *x,int *y)
{
	int t=*x;
	*x=*y;
	*y=t; 
}
int main()
{
	int i=10,j=20;
	printf("i=%d j=%d\n",i,j);
	swap(&i,&j);
		printf("i=%d j=%d\n",i,j);
}
