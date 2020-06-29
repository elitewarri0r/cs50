#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

string toHex(int q);
char hexa(int n);

int main(void)
{
	int n = get_int("Enter the number to be converted to hex decimal : ");
	char* p = toHex(n);
	printf("%s\n", p);
	printf("%X\n", n);
}

char* toHex(int q)
{
	int hex[10];
	int i = 0;
	while(q != 0)
	{
		hex[i] = q%16;
		q = q/16;
		i ++;
	}
	char* ptrhex = malloc(i+1);
	int j;
	for(j = 0; i>0; j++, i--)
	{
		ptrhex[j] = hexa(hex[i-1]);
	}
	ptrhex[j+1] = '\0';
	return ptrhex;
}

char hexa(int n)
{
	char c;
	switch(n) 
	{
	case 0:
		c = '0';
		break;
	case 1:
		c = '1';
		break;
	case 2:
		c = '2';
		break;
	case 3:
		c = '3';
		break;
	case 4:
		c = '4';
		break;
	case 5:
		c = '5';
		break;
	case 6:
		c = '6';
		break;
	case 7:
		c = '7';
		break;
	case 8:
		c = '8';
		break;
	case 9:
		c = '9';
		break;
	case 10:
		c = 'A';
		break;
	case 11:
		c = 'B';
		break;
	case 12:
		c = 'C';
		break;
	case 13:
		c = 'D';
		break;
	case 14:
		c = 'E';
		break;
	case 15:
		c = 'F';
		break;
	}
	return c;
}
