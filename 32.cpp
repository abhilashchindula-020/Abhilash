#include <stdio.h>

int main() {
    int N, M;
    
    // Read input values
    scanf("%d %d", &N, &M);
    
    // Calculate profit or loss
    int cost = 30 * N;
    int revenue = 50 * M;
    int profit = revenue - cost;
    
    // Output the result
    printf("%d\n", profit);

    return 0;
}
