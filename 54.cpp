#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d ", (i + j) % 2);
            }
            printf("\n");
        }
    }

    return 0;
}
