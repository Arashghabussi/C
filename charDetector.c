#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

// Q1: Suppose that i and j are variables of typeint.  What is the type of the expressioni / j +'a'?
// A1: They will remain as int

// isDigit
bool isDigit(char input) {
    if(isdigit(input)){
        return true;
    } else {
        return false;
    }
}

// isLower
bool isLower(char input) {
    if(islower(input)){
        return true;
    } else {
        return false;
    }
}

// isUpper
bool isUpper(char input) {
    if(isupper(input)){
        return true;   
    } else {
        return false;
    }
}

// Main
int main(int argc, char ** argv) {
    //User input
    printf("I’m waiting for a character: ");
    char input;
    //scanf("%c", input);
    input = getchar();
    //char input = c;
    
    //Calling the functions
    bool isDigitStatus = isDigit(input);
    bool isLowerStatus = isLower(input);
    bool isUpperStatus = isUpper(input);
    
    // if checking
    if(isDigitStatus){
        printf("input is digit : %c ", input);
    } else {
        printf("input is not digit : %c ", input);
    }
    printf("\n");
    if(isLowerStatus){
        printf("input is lower case letter : %c ", input);
    } else {
        printf("input is not lower case letter : %c ", input);
    }
    printf("\n");
    if(isUpperStatus){
        printf("input is upper case letter : %c ", input);
    } else {
        printf("input is not upper case letter : %c ", input);
    }
}