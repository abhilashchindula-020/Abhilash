#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MOD 1000000007

// Comparison function for qsort
int compare(const void* a, const void* b) {
    int x = *(int*)a;
    int y = *(int*)b;
    return x - y;
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);

        int* costs = (int*)malloc(N * sizeof(int));
        for (int i = 0; i < N; i++) {
            scanf("%d", &costs[i]);
        }

        char A[K + 1]; // +1 for null terminator
        scanf("%s", A);

        // Sort costs in increasing order
        qsort(costs, N, sizeof(int), compare);

        int left = 0;
        int right = N - 1;
        long long revenue = 0;

        for (int i = 0; i < K; i++) {
            if (A[i] == '0') {
                revenue = (revenue + costs[left]) % MOD;
                left++;
            } else {
                revenue = (revenue + costs[right]) % MOD;
                right--;
            }
        }

        printf("%lld\n", revenue);
        free(costs);
    }

    return 0;
}

