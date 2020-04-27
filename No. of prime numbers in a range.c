#include <stdio.h>
int main()
{
   int n1, n2, flag, i, j;
 
   /* Ask user to input the from/to range
    * like 1 to 100, 10 to 1000 etc.
    */
   printf("Enter two range(input integer numbers only):\n");
   //Store the range in variables using scanf
   scanf("%d %d", &n1, &n2);
 
   //Display prime numbers for input range
   printf("Prime numbers from %d and %d are:\n", n1, n2);
   for(i=n1+1; i<=n2; ++i)
   {
      flag=0;
      for(j=2; j<=i/2; ++j)
      {
         if(i%j==0)
         {
            flag=1;
            break;
         }
      }
      if(flag==0)
         printf("%d\n",i);
  }
  return 0;
}
