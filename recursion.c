#include<cs50.h>
#include<stdio.h>

void pyramidPrinter(int h);

int main(void){
	int n = get_int("Enter the height of the pyramid: ");
	pyramidPrinter(n);
}

void pyramidPrinter(int h){
	if(h == 0){
		return;
	}
	pyramidPrinter(h-1);
	for(int i=0; i<h; i++){
		printf("#");
	}
	printf("\n");
}
