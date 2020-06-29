#include<cs50.h>
#include<stdio.h>

int * bubbleSort(int l, int num[]);

int main(void){
	int l = get_int("Enter the total number of numbers : ");
	int numbers[l];
	for(int i = 0; i < l; i++){
		numbers[i] = get_int("Enter number %i: ",i+1);
	}

	printf("Numbers sorted in asending order are : ");
	int *p = bubbleSort(l,numbers);
	for(int j = 0; j < l; j++){
		printf("%i ",*(p+j));
	}
	printf("\n");
}


int * bubbleSort(int l,int num[]){
	int temp;
	for(int i = 0; i<l-1; i++){
		int small = i;
		for(int j = i+1; j<l; j++){
			if(num[small] > num[j]){
				small = j;
			}
		}
		temp = num[i];
		num[i] = num[small];
		num[small] = temp;
	}
	return num;
}
