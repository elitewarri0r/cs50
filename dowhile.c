// testing do while loop 
// creating new function and calling it in main
#include<stdio.h>
#include<cs50.h>

// Function get +ve number and return it
int plusnumber(void)
{
	int n;
	do
	{
		n = get_int("Enter a Number: ");
	}
   	while(0>n);
	return n ;
}

int main(void)
{
	int n = plusnumber();
	for(int i = 0; n>i; i++)
	{
		for(int j = 1; n>j; j++)
		{
			printf("H");
		}
		printf("H\n");
	}
}
