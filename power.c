#include <stdio.h>

int power(int n, int m) {
    if (m == 0) 
        return 1; // Base case: anything to the power of 0 is 1
    else 
        return n * power(n, m - 1); // Recursive case
}

int main() {
    int n, m;
    printf("Enter a base: ");
    scanf("%d", &n);
    printf("Enter a power: ");
    scanf("%d", &m);
    
    int r = power(n, m);
    printf("Result: %d\n", r);
    
    return 0;
}
