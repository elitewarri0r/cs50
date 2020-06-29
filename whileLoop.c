// program to test if else
#include <stdio.h>
#include<cs50.h>

int main(void)
{
int input = get_int("Enter a number: ");
printf(" Number is ");
if (input%2 == 0 )
{
	printf ("even\n");
}
else 
{
	printf ("odd\n");
}
int counter= 0;
while ( counter<50 )
{
	printf("this is the number %i + %i\n ",input,counter);
	counter++;
	input++;
}
}
