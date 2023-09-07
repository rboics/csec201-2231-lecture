#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random character between 'a' and 'z'
char generateRandomChar() {
    return 'a' + rand() % 26;
}


int main() {
    int numStrings;
    int stringsInFile;
    char fileName[100];
    FILE* file; //More on the * later in the semester

    // Seed the random number generator with the current time
    srand((unsigned int)time(NULL));

    // Input the number of strings from the user
    printf("Enter the number of strings to generate: ");
    scanf("%d", &numStrings);

    // Input the file name from the user
    printf("Enter the file name: ");
    scanf("%s", fileName);

    // Open the file for writing
    file = fopen(fileName, "w");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Write the number of strings as the first line in the file
    fprintf(file, "%d\n", numStrings);

    // Generate and write random strings to the file
    for (int i = 0; i < numStrings; i++) {
        char randomString[11]; // 10 characters + null terminator
        for (int i = 0; i < 10; i++) {
            randomString[i] = generateRandomChar();
        }
        randomString[10] = '\0'; // Null-terminate the string
        fprintf(file, "%s\n", randomString);
    }

    // Close the file
    fclose(file);

    // Open the file for reading and print its contents
    file = fopen(fileName, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    printf("...Opening File...\n");
    fscanf(file, "%d", &stringsInFile);
    printf("There are %d strings in this file.\n", stringsInFile);
    // Read and print each line from the file
    char garbage;
    char line[12]; // To store each line (10 characters + newline + null terminator)
    //fscanf(file, "%c", &garbage);//clear out a null byte at the end of the first line.
    //printf("Garbage - %c\n");
    
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("Printed as String: %s", line);
        printf("Printed as Char array: ");
        for (int i = 0; i < sizeof(line); i++) {
            printf("%c", line[i]);
        }
      
    }

    // Close the file
    fclose(file);

    return 0;
}
