#include <stdio.h>

typedef long long ll;

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        ll K;
        scanf("%d %lld", &N, &K);

        ll sum = 0;
        int x;
        int minVal = 1e9 + 1;

        for (int i = 0; i < N; i++) {
            scanf("%d", &x);
            sum += x;
            if (x < minVal) minVal = x;
        }

        sum += K * (ll)minVal;

        printf("%lld\n", sum);
    }

    return 0;
}
