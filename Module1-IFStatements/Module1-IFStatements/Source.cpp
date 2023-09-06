#include <stdio.h>

int main(void) {

	int grade;
	char lettergrade='E';

	printf("Enter your grade: ");
	scanf("%d", &grade);
	//A -> 90-100, B -> 80-89, C -> 70-79, D -> 60-69, F -> 0-59
	
	if (grade >= 90) {
		lettergrade = 'A';
	}
	//&& --> logical 'and', || --> logical 'or', ! --> logical 'not'
	else if (grade >= 80 && grade < 90) {
		lettergrade = 'B';
	}
	else if (grade >= 70 && grade < 80) {
		lettergrade = 'C';
	}
	else if (grade >= 60 && grade < 70) {
		lettergrade = 'D';
	}
	else {
		lettergrade = 'F';
	}
	printf("Your letter grade is: %c", lettergrade);
}