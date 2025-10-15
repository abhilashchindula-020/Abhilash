#include <stdio.h>

int main() {
    int A, B, C;
    
    // Read input values
    scanf("%d %d %d", &A, &B, &C);
    
    // Calculate profit or loss
    int profit = A - (B + C);
    
    // Print the result
    printf("%d\n", profit);
    
    return 0;
}
