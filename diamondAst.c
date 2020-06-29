#include<cs50.h>
#include<stdio.h>

int main(void){
	int N = get_int("Enter the length of the middle row: ");
	int n = N/2;
	int m = 1;
	int p ;
	int printkey[N];

	for(int q = 0; q < N; q++){
		printkey[q] = 0;
	}

	printkey[n] = 1;

	for(int i = 1; i <= n+1; i++){
		for(int j = 0; j < N; j++){
			if(printkey[j] == 1){
				printf("1");
			}
			else{
				printf("0");
			}
		}
		printf("\n");
		printkey[n+i] = 1;
		printkey[n-i] = 1;
	}

        for(int i = 0; i <= n-1; i++){
                printkey[0+i] = 0;
                printkey[(N-1)-i] = 0;
                for(int j = 0; j < N; j++){
                        if(printkey[j] == 1){
                                printf("1");
                        }
                        else{
                                printf("0");
                        }
                }
                printf("\n");
	}
}

