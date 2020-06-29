#include<cs50.h>
#include<stdio.h>

void hello(int n)
{
	for(int i = 0 ;n > i; i++)
	{
		printf("hello\n");
	}
}

int main(void)
{
	hello(5);
}

