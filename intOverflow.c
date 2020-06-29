#include<stdio.h>
#include<unistd.h>

int main(void){
	int n = 2147483640;
	int i = 0;
	printf("%i",n);
	while(i<20){
		i++;
		if(i%100 == 0){
			sleep(1);
		}
		n++;
		printf("%i  ",n);
	}
	
	
}
	
