/*rite a program to count the vowels in a given string and show their occurance count in the string
Algorithm:
Step 1:Take the string as a input with gets()
Step 2:Itterate the string
Step 3:Apply conditions for vowels occurance in string and increment its counter value for their presence in string
Step 4:Print the occurance value


--------------------------------
input:
enter the string
Write a program in Python to calculate salary of an employee given his basic pay (take as input from user). Calculate gross salary of employee. Let HRA be 10 % of basic pay and
output:
a : *******************
e : **************
i : *******
o : **********
u : ****

--------------------------------
*/
#include <stdio.h>

void printHistogram(int x, char y)
{
	int b=0;
	printf("%c : ", y);
	for(b=0;b<x;b++)
		printf("*");
	printf("\n");	
}

int main()
{
	int i,vowel_counter[5]={0};
		char c[1000];
	printf("enter the string\n");
	gets(c);
	for(i=0; c[i]!='\0' ;i++)
	{
		if(c[i]=='a' || c[i]=='A')
			{
				vowel_counter[0]+=1;
			}
		if(c[i]=='e' || c[i]=='E')
			{
				vowel_counter[1]+=1;
			}
			if(c[i]=='i' || c[i]=='I')
			{
				vowel_counter[2]+=1;
			}
		if(c[i]=='o' || c[i]=='O')
			{
				vowel_counter[3]+=1;
			}
		if(c[i]=='u' || c[i]=='U')
			{
				vowel_counter[4]+=1;
			}
	}
	/*printf("The count of a or A is=%d\n",vowel_counter[0]);
	printf("The count of e or E is=%d\n",vowel_counter[1]);
	printf("The count of i or I is=%d\n",vowel_counter[2]);
	printf("The count of o or O is=%d\n",vowel_counter[3]);
	printf("The count of u or U is=%d\n",vowel_counter[4]);*/
	
	printHistogram(vowel_counter[0], 'a');
	printHistogram(vowel_counter[1], 'e');
	printHistogram(vowel_counter[2], 'i');
	printHistogram(vowel_counter[3], 'o');
	printHistogram(vowel_counter[4], 'u');

	return 0;
	
}
