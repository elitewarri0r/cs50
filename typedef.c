#include<cs50.h>
#include<stdio.h>

int main(void){
	typedef struct{
		int no;
		string steps;
	}instruction;

	instruction instr[4];
	instr[0].no = 1;
	instr[0].steps = "Bring the bottle.\n";
	instr[1].no = 2;
	instr[1].steps = "Open the cap.\n";
	instr[2].no = 3;
	instr[2].steps = "Pour water into glass.\n";
	instr[3].no = 4;
	instr[3].steps = "Drink the water.\n";

	int n = get_int("Enter the number step: ");
	printf("%s", instr[n-1].steps);
}

