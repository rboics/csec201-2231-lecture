#include <stdio.h>
#include <string.h>

int main() {
    char str1[50];
    char str2[50];

    // Input two strings
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);



    // Calculate and display the length of each string
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    printf("Length of the first string: %d\n", len1);
    printf("Length of the second string: %d\n", len2);
    system("pause");
    




    // Copy the first string to a new variable using strcpy
    char copiedStr[50];
    //strcryp(LocationWe'reCopyingTo,LocationWe'reCopyingFrom)
    strcpy(copiedStr, str1);
    printf("Copied string: %s\n", copiedStr);
    system("pause");




    // Copy a portion of the second string to a new variable using strncpy
    char partialCopy[50];
    int n;
    printf("Enter the number of characters to copy from the second string: ");
    scanf("%d", &n);
    strncpy(partialCopy, str2, n);
    partialCopy[n] = '\0'; // Ensure null-termination
    printf("Partial copy of the second string: %s\n", partialCopy);
    system("pause");



    // Compare the two strings using strcmp
    int cmpResult = strcmp(str1, str2);
    if (cmpResult == 0) {
        printf("The two strings are equal.\n");
    }
    else if (cmpResult < 0) {
        printf("The first string is lexicographically before the second string.\n");
    }
    else {
        printf("The first string is lexicographically after the second string.\n");
    }
    system("pause");



    // Compare the first n characters of the two strings using strncmp
    int cmpPartialResult = strncmp(str1, str2, n);
    if (cmpPartialResult == 0) {
        printf("The first %d characters of the two strings are equal.\n", n);
    }
    else if (cmpPartialResult < 0) {
        printf("The first %d characters of the first string are lexicographically before the second string.\n", n);
    }
    else {
        printf("The first %d characters of the first string are lexicographically after the second string.\n", n);
    }

    return 0;
}