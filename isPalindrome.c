#include<cs50.h>
#include<stdio.h>
#include<string.h>

int isPalindrome(string s);

int main(void){
	string pal = get_string("Type a word: ");
	if(isPalindrome(pal) == 0 ){
		printf("The word entered is a palindrome.");
	}
	else{
		printf("The word entered is not a palindrome.");
	}
	printf("\n");
}

int isPalindrome(string s){
	int i = strlen(s)-1;
	for(int j = 0; j <= i; j++){

		if(s[i] != s[j]){
			return 1;
		}
		i--;
	}
	return 0;
}
