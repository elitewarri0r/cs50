#include<cs50.h>
#include<stdio.h>

float avg(int N,int numbers[]);

int main(void){

	int N = get_int( "Enter total number of numbers: ");
	int numbers[N];

	for(int i = 0; i<N; i++){
		numbers[i] = get_int( "Enter value number %i : ", i+1 );
	}

	printf("Avg of the numbers is %.2f\n",avg(N, numbers));
}


float avg(int N,int numbers[]){

	float avg = 0;

	for(int i = 0; i<N; i++){
		printf("%i\n",numbers[i]);
		avg += numbers[i];
	}

	return avg/N;
}
