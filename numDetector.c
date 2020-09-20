#include <stdio.h>
#include <string.h>
#include <stdbool.h> 


bool doesContainDigit(char input[]){
    
    for (int i = 0; i < strlen(input); i++) {
        if(isdigit(input[i])){
            return true;
        }
    }
    return false;
}

bool doesContainOneDigit(char input[]){
    int counter = 0;
    for (int i = 0; i < strlen(input); i++) {
        if(isdigit(input[i])){
            counter++;
        } 
    }
    if(counter == 1){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    
    char input[50];

    printf("Enter your string: ");
    scanf("%s", input);
    
    bool status1 = doesContainDigit(input);
    bool status2 = doesContainOneDigit(input);
    
    if(status1){
        printf("The string contains digits.");
    } else {
        printf("The string does not contain any digit.");
    }
    
    printf("%c",'\n');
    
    if(status2){
        printf("The string contains only one digit.");
    } else {
        printf("The string does not contain only one digit.");
    }

}


