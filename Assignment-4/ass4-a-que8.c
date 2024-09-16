//8.Write a function to return next term of Fibonacci series with each call to the function


#include <stdio.h>

int nextFibonacci() {
    
    static int a = 0, b = 1;

    int nextTerm = a;
    a = b;
    b = nextTerm + b;

    return nextTerm;
}

int main() {
    int numTerms;
    
    printf("Enter the number of terms: ");
    scanf("%d", &numTerms);
    
    for (int i = 0; i < numTerms; i++) {
        printf("%d ", nextFibonacci());
    }
    
    return 0;
}


