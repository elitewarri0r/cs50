#include<stdio.h>
#include<cs50.h>
#include<string.h>

int toDec(string h);

int main(void)
{
	string x = get_string("Enter hexadecimal number: ");
	int dec = toDec(x);
	printf("%i\n", dec);
}

int toDec(string h)
{
	int n = strlen(h);
	int p = 1;
	int b;
	int dec = 0;
	
	for(int i = 0; i<n; i++)
		{
		char a = h[n-(i+1)];
		switch(a) {
		case '0':
			b = 0;
			break;
		case '1':
			b = 1;
			break;
		case '2':
			b = 2;
			break;
		case '3':
			b = 3;
			break;
		case '4':
			b = 4;
			break;
		case '5':
			b = 5;
			break;
		case '6':
			b = 6;
			break;
		case '7':
			b = 7;
			break;
		case '8':
			b = 8;
			break;
		case '9':
			b = 9;
			break;
		case 'A':
			b = 10;
			break;
		case 'B':
			b = 11;
			break;
		case 'C':
			b = 12;
			break;
		case 'D':
			b = 13;
			break;
		case 'E':
			b = 14;
			break;
		case 'F':
			b = 15;
			break;
		}
		
		
		dec = dec + b*p;
		p = p*16;
	}
	return dec;
}
