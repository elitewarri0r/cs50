#include<cs50.h>
#include<stdio.h>

int main(void){
	int n = get_int("Enter the height of the right triangle: ");
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < i; j++){
			printf("*");
		}
	printf("\n");
	}
}
