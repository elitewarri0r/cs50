#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	char *s = malloc(5);
	string t = "sri";
	strcpy(s,t);
	printf("%s\n",t);
	free(s);
}
