#include <stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, A[100];
        scanf("%d", &N);

        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int max_profit = 0;

        // Try all possible X values (number of cakes baked per day)
        for (int X = 0; X <= 100; X++) {
            int total_sold = 0;
            for (int i = 0; i < N; i++) {
                total_sold += min(X, A[i]);
            }

            int revenue = total_sold * 50;
            int cost = X * 30 * N;
            int profit = revenue - cost;

            if (profit > max_profit) {
                max_profit = profit;
            }
        }

        printf("%d\n", max_profit);
    }

    return 0;
}
