#include <stdio.h>

#define MAXN 200005

int freq[MAXN];

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        for (int i = 0; i <= N; i++) freq[i] = 0; // reset frequency

        int A;
        for (int i = 0; i < N; i++) {
            scanf("%d", &A);
            freq[A]++;
        }

        int max_freq = 0, max_col = -1;
        for (int i = 1; i <= N; i++) {
            if (freq[i] > max_freq) {
                max_freq = freq[i];
                max_col = i;
            }
        }

        int result;
        if (max_col == 1) {
            result = N - freq[1]; // already coloured correctly
        } else {
            result = 1 + (N - max_freq); // 1 global + rest as fixes
        }

        printf("%d\n", result);
    }

    return 0;
}
