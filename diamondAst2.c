#include<cs50.h>
#include<stdio.h>

int main(void){
	int h = get_int("Enter the length of the middle row: ");
	int w = h+(h-1);
	int sc = -1;
	int sp = h;

	for(int i=0; i<h; i++){
		sc += 2;
		sp -= 1;
		int tsc = sc;
		for(int j=0; j<w; j++){
			if((j >= sp) && (tsc > 0)){
				printf("*");
				tsc--;
			}
			else{
				printf("-");
			}
		}
		printf("\n");
        }

	sc = w;
	sp = 0;
	for(int i=0; i < h-1; i++){
		sc -= 2;
		sp += 1;
		int tsc = sc;
		for(int j=0; j<w; j++){
			if((j >= sp) && (tsc > 0)){
				printf("*");
				tsc--;
			}
			else{
				printf("-");
			}
		}
		printf("\n");
        }

}

