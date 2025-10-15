#include <stdio.h>

// Function to count odd and even divisors of N
void countDivisors(int N, int *odd, int *even) {
    *odd = 0;
    *even = 0;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            if (i % 2 == 0)
                (*even)++;
            else
                (*odd)++;
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);  // Number of test cases

    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B);  // Read A and B

        int found = 0;

        // Try numbers from 1 to 1000 to find a valid N
        for (int N = 1; N <= 1000; N++) {
            int odd = 0, even = 0;
            countDivisors(N, &odd, &even);

            if (odd == A && even == B) {
                found = 1;
                break;
            }
        }

        if (found)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
