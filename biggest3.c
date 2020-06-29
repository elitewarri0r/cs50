#include<cs50.h>
#include<stdio.h>

int main(void){
	int a = get_int("Enter the 1st number: ");
	int b = get_int("Enter the 2nd number: ");
	int c = get_int("Enter the 3rd number: ");
	int big;
	if(a > b){
		big = a;
	}

	else{
		big = b;
	}

	if(big > c){
		printf("%i ",big);
	}

	else{
		printf("%i ",c);
	}
	printf("is the biggest number of all.\n");
}
