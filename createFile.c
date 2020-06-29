#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
	FILE *file = fopen("phonebook.csv","a");

	string name = get_string("Enter name : ");
	string number = get_string("Enter the number : ");
	fprintf(file, "%s,%s\n", name, number);

	fclose(file);
}
