#include <stdio.h>

void solve(int N, int K) {
    int P[105];
    
    // First N - K elements: descending from N to K + 1
    int val = N;
    for (int i = 0; i < N - K; i++) {
        P[i] = val;
        val--;
    }
    
    // Remaining K elements: ascending from 1
    for (int i = N - K; i < N; i++) {
        P[i] = i - (N - K) + 1;
    }
    
    // Print the result
    for (int i = 0; i < N; i++) {
        printf("%d ", P[i]);
    }
    printf("\n");
}

int main() {
    int T, N, K;
    scanf("%d", &T);
    
    while (T--) {
        scanf("%d %d", &N, &K);
        solve(N, K);
    }

    return 0;
}
