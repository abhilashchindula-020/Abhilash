#include <stdio.h>

#define MAXN 200005

int A[MAXN];

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int T,i,j,k;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        for ( i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int max_val = 0;

        // Try all pairs (j, k)
        for ( j = 0; j < N; j++) {
            for ( k = 0; k < N; k++) {
                if (j == k) continue;

                int sum = A[j] + A[k];

                for ( i = 0; i < N; i++) {
                    if (i == j || i == k) continue;

                    int val = A[i] % sum;
                    if (val > max_val) {
                        max_val = val;
                    }
                }
            }
        }

        printf("%d\n", max_val);
    }

    return 0;
}
