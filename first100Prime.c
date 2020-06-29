#include<cs50.h>
#include<stdio.h>

int isPrime(int n);
int main(void){

	int check = 1;
	for(int i = 0; check < 101; i++){
		if(isPrime(i) == 1){
			printf("%i) %i is prime\n",check,i);
			check++;
		}
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
