#include <stdio.h>

int main(void) {
	//Reminder: n! = 1 * 2 * ... * (n-2) * (n-1) * n

	int factVal = 0;
	int product = 1;

	do {
		
		printf("Enter in a value for the factorial calculation. Enter -1 to quit.\n");
		scanf("%d", &factVal);

		if (factVal == -1) { 
			break; //Will cause the program to exit the nearest loop
		}


		//Factorial Calculation
		// for(<initial state>; <looping condition>; <increment>)
		product = 1;
		for (int i = 1; i <= factVal; i++){
			product = product * i;
		
		}

		printf("%d! = %d\n\n", factVal, product);
	} while (factVal != -1);
}