#include<stdio.h>
#include<cs50.h>

void swap(int *a,int *b);

int main(void)
{
	int x = 1;
	int y = 0;
	printf("x: %i. y: %i.\n",x,y);
	swap(&x,&y);
	printf("x: %i. y: %i.\n",x,y);
}

void swap(int *a,int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
