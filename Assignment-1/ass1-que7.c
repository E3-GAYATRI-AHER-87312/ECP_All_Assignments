#include <stdio.h>

void processNumber(int number) {
    // Check if the number is a 4-digit number
    if (number < 1000 || number > 9999) {
        printf("Please enter a 4-digit number.\n");
        return;
    }
    
    // a. Display the face value of each digit
    printf("a. Face values of each digit:\n");
    
    int digits[4];  // Array to store individual digits
    int temp = number;  // Temporary variable to hold the number for processing
    for (int i = 3; i >= 0; i--) {
        digits[i] = temp % 10;  // Extract each digit
        temp /= 10;  // Remove the last digit
    }
    
    // Print each digit
    for (int i = 0; i < 4; i++) {
        printf("%d\n", digits[i]);
    }

    // b. Display the place value of each digit
    printf("\nb. Place values of each digit:\n");
    printf("%d = %d 000 + %d00 + %d0 + %d\n", number, digits[0], digits[1], digits[2], digits[3]);

    // c. Display the number in reverse order
    printf("\nc. Number in reverse order: %d%d%d%d\n", digits[3], digits[2], digits[1], digits[0]);
}

int main() {
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);
    
    processNumber(number);
    
    return 0;
}
