#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int A[100];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }

        int max_val = A[0];
        int index = 1;  // 1-based index

        for (int i = 1; i < N; i++) {
            if (A[i] > max_val) {
                max_val = A[i];
                index = i + 1;  // Convert to 1-based index
            }
        }

        printf("%d\n", index);
    }

    return 0;
}
