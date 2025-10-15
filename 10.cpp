#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long A, B;
        scanf("%lld %lld", &A, &B);

        if (A == 0) {
            printf("No\n");
        } else {
            printf("Yes\n");
        }
    }

    return 0;
}
