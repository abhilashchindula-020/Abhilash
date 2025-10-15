#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Number of ingredients

        int A[100], B[100];

        // Read required amounts
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        // Read current amounts
        for (int i = 0; i < N; i++) {
            scanf("%d", &B[i]);
        }

        int cost = 0;

        // Calculate the total cost of buying missing ingredients
        for (int i = 0; i < N; i++) {
            if (A[i] > B[i]) {
                cost += (A[i] - B[i]);
            }
        }

        // Output the result for this test case
        printf("%d\n", cost);
    }

    return 0;
}
