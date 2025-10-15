#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases

    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);  // Read N and M

        int collected[101] = {0};  // Index from 1 to 100 (max M = 100)

        for (int i = 0; i < N; i++) {
            int marble;
            scanf("%d", &marble);
            collected[marble] = 1;  // Mark this type as collected
        }

        int missing = 0;
        for (int i = 1; i <= M; i++) {
            if (collected[i] == 0) {
                missing++;  // Count types not collected
            }
        }

        printf("%d\n", missing);
    }

    return 0;
}
