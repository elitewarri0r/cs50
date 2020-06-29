#include<stdio.h>
#include<unistd.h>

int main(void){
	for(int i=2; ; i*=2){
		printf("%i\n",i);
		usleep(900);
	}
}
