#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char substr[50];

    // Input a string
    printf("Enter a string: ");
    scanf("%s", str);

    // Input a substring to search for
    printf("Enter a substring to search for: ");
    scanf("%s", substr);

    int strLen = strlen(str);
    int substrLen = strlen(substr);

    // Iterate through the characters of the main string
    for (int i = 0; i <= strLen - substrLen; i++) {
        // Use strncmp to compare the substring with a portion of the main string
        //Note: str+i is the same as str[i]
        //Remember, str[i] means the addr of
        //str + i * sizeof(char) 
        //Could use &(str[i])
        int cmpResult = strncmp(str+i, substr, substrLen);
        printf("Iteration #%d - Comparing %s to %s\n", i, str + i, substr);
        // If strncmp returns 0, the substring is found
        if (cmpResult == 0) {
            printf("Substring found at index %d.\n", i);
            return 0; // Exit the program
        }
    }

    // If the loop completes without finding the substring
    printf("Substring not found in the string.\n");

    return 0;
}
