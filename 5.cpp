#include <stdio.h>
#include <string.h>

#define MAXN 2005

int A[MAXN];
long long dp[2 * MAXN + 1][MAXN];  // dp[k][x] = max sum with k coins, x adds

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);
        for (int i = 0; i < N; ++i)
            scanf("%d", &A[i]);

        // Initialize dp with -1e18 (very small), except dp[0][0] = 0
        for (int i = 0; i <= 2 * N; ++i)
            for (int j = 0; j <= N; ++j)
                dp[i][j] = -1e18;
        dp[0][0] = 0;

        for (int i = 0; i < N; ++i) {
            // Create new dp for current step
            long long new_dp[2 * MAXN + 1][MAXN];
            for (int k = 0; k <= 2 * N; ++k)
                for (int x = 0; x <= N; ++x)
                    new_dp[k][x] = -1e18;

            for (int k = 0; k <= 2 * N; ++k) {
                for (int x = 0; x <= N; ++x) {
                    if (dp[k][x] == -1e18) continue;

                    // 1. Do nothing
                    if (new_dp[k][x] < dp[k][x])
                        new_dp[k][x] = dp[k][x];

                    // 2. Pay 1 coin
                    if (k + 1 <= 2 * N)
                        if (new_dp[k + 1][x + 1] < dp[k][x] + A[i])
                            new_dp[k + 1][x + 1] = dp[k][x] + A[i];

                    // 3. Pay 2 coins
                    if (k + 2 <= 2 * N)
                        if (new_dp[k + 2][x + 1] < dp[k][x] + A[i] + x)
                            new_dp[k + 2][x + 1] = dp[k][x] + A[i] + x;
                }
            }

            // Copy back new_dp to dp
            for (int k = 0; k <= 2 * N; ++k)
                for (int x = 0; x <= N; ++x)
                    dp[k][x] = new_dp[k][x];
        }

        // For each K = 1 to 2N, find max over all x
        for (int k = 1; k <= 2 * N; ++k) {
            long long ans = 0;
            for (int x = 0; x <= N; ++x) {
                if (dp[k][x] > ans)
                    ans = dp[k][x];
            }
            printf("%lld ", ans);
        }
        printf("\n");
    }

    return 0;
}

