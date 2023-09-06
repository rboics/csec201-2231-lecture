#include <stdio.h>
int main(void) {

	char letter;
	printf("Enter the letter grade: ");
	scanf("%c", &letter);

	switch (letter) {
		case 'A':
			printf("Grade Range: 90-100\n");
			break;
		case 'B':
			printf("Grade Range: 80-89\n");
			break;
		case 'C':
			printf("Grade Range: 70-79\n");
			break;
		case 'D':
			printf("Grade Range: 60-69\n");
			break;
		case 'F':
			printf("Grade Range: 00-59\n");
			break;
		default:
			printf("Valid letter grades are A, B, C, D, and F.\n");
	}
}