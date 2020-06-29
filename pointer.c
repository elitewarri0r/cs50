#include<stdio.h>

int main(void){
	int x = 50;
	int *y = &x;
	printf("%p\n",y);
	printf("%i\n",*y);
}
