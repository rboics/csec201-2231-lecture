#include <stdio.h> //Import standard input and output functionality

int main(void) {
	//Native data types: bool, char, float, double
	//Native data types will different format specifiers (usually)
	//For example, %c is used for char, %f is used for floats
	char letter;

	printf("Enter a letter: "); //printf -> prints
	//Scanf - parameter #1 is the data type to read in (use format specifiers)
	//%d is a format specifier that indicates we're reading in an integer's worth of data
	//Scanf - parameter #2 is the location (memory address) to store the data read in
	//& in this context should be read as "address of"
	scanf("%c", &letter); //scanf -> is used to read input
	//Note: No & is needed here because we need data, not a memory address.
	printf("Your letter is: %d", letter);

}