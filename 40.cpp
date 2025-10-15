#include <stdio.h>
#include <limits.h>

#define MAXN 200005

int A[MAXN];
int min_prefix[MAXN];
int min_suffix[MAXN];

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        for (int i = 1; i <= N; i++) {
            scanf("%d", &A[i]);
        }

        // Compute min_prefix[i]: min cost to cover [1, i] using prefix operations
        min_prefix[0] = INT_MAX;
        for (int i = 1; i <= N; i++) {
            min_prefix[i] = min(min_prefix[i - 1], A[i]);
        }

        // Compute min_suffix[i]: min cost to cover [i, N] using suffix operations
        min_suffix[N + 1] = INT_MAX;
        for (int i = N; i >= 1; i--) {
            min_suffix[i] = min(min_suffix[i + 1], A[i]);
        }

        // Try all split points i: prefix covers [1..i], suffix covers [i+1..N]
        int result = INT_MAX;
        for (int i = 0; i <= N; i++) {
            int total_cost = min_prefix[i] + min_suffix[i + 1];
            result = min(result, total_cost);
        }

        printf("%d\n", result);
    }

    return 0;
}
