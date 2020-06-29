#include<stdio.h>
#include<cs50.h>

int isPrime(int n);
int plusNumber(void);

int main(void)
{
	int n = plusNumber();
	if (isPrime(n))
	{
		printf("The number %i is prime. \n",n);
	}
	else
	{
		printf("The number %i is not prime. \n",n);
	}
}


int isPrime(int n)
{
	for(int i = 2; i<(n/2+1); i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	return 1;
}


int plusNumber(void)
{
        int n;
        do
        {
                n = get_int("Enter a Number: ");
        }
        while(0>n);
        return n ;
}

