#include <stdio.h>

// 1
// sum of 1th and 3th elements

void sumOfOneThree(int arr[], int start, int end) {
    int sum = 0;
    sum = arr[0] + arr[2];
    printf("sum of first and third numbers is : %d ", sum);
    //sum = sum + arr[i];
    //return sum;
}

// 3

int sumOfSubarray(int arr[], int start, int end) {
    int sum = 0;
    for (int i = 0; i < sizeof(arr); i++) {
            if(i >= start && i <= end){
                    sum = sum + arr[i];
            }
    }
    return sum;
}


int main() {
// 1
     printf("-----------------1--------------------");
    printf("\n");
    int arr[6] = {1, -3, 2, 9, -2, 10};
    
// 2
    if (sizeof(arr) >= 3){
            sumOfOneThree(arr ,0, 3);
    } else {
            printf("The list is too short!");
            //exit(0);   
        // Termination or Exit
    }
    printf("\n");
    printf("-----------------3---------------------");
    printf("\n");
    
// 3
    printf("Sum of start - end index is ");
    printf("\n");
    printf ("%d", sumOfSubarray (arr , 1, 3)); // Outputs 8 (-3 + 2 + 9 = 8)
    printf("\n");
    printf ("%d", sumOfSubarray (arr , 0, 1)); // Outputs -2 (1 + ( -3) = -2)
    
}
