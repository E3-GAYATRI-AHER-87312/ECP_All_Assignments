//7.Write a function to print given number of terms of Fibonacci series


#include <stdio.h>


void printFibonacci(int n) {
    int a = 0, b = 1, nextTerm;
    
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
}

int main() {
    int numTerms;
    
    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);
    
    printFibonacci(numTerms);
    
    return 0;
}

