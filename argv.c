#include<cs50.h>
#include<stdio.h>

int main(int l, string argv[]){
	if(l == 2){
		printf("Welcome, %s\n",argv[1]);
		return 0;
	}
	printf("missing argument\n");
	return 1;
}
