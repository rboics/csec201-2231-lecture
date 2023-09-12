#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//CHANGE THIS CONSTANT
#define alphabet2size 26

bool containsDuplicate(int arr[], int size) {
    const int MAX_VALUE = 10000;
    bool hashTable[10000] = { false };

    for (int i = 0; i < size; i++) {
        if (hashTable[arr[i]]) {
            return true;
        }
        hashTable[arr[i]] = true;
    }
    return false;
}

int main(void) {
    char alphabet1[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char alphabet2[73] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*()1234567890";
    int mapping[26];
    int xorRes[26];
    bool used[alphabet2size];
    int randMap;

    srand(time(NULL));
    for (int i = 0; i < 26; i++) xorRes[i] = 0;

    while (containsDuplicate(xorRes, 26)) {

        for (int i = 0; i < 26; i++) {
            xorRes[i] = 0;
            mapping[i] = -1;
        }
        for (int i = 0; i < alphabet2size; i++)used[i] = false;
        for (int i = 0; i < 26; i++) {
            randMap = rand() % alphabet2size;
            if (used[randMap])i--;
            else {
                used[randMap] = true;
                xorRes[i] = alphabet1[i] ^ alphabet2[randMap];
                mapping[i] = randMap;
            }
        }
        printf("Trying mapping: ");
        for (int i = 0; i < 26; i++) printf("%c - %c, ", alphabet1[i], alphabet2[mapping[i]]);
        printf("\n");
        //system("pause"); //Used for debugging
    }
    printf("No duplicates found!\nXOR values: ");
    for (int i = 0; i < 26; i++) printf("%d, ", xorRes[i]);
    printf("\nKey File:");
    for (int i = 0; i < 26; i++) printf("%c,%c\n", alphabet1[i], alphabet2[mapping[i]]);

}