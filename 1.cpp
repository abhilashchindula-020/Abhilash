#include <stdio.h>

int main() {
    int T, N;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        scanf("%d", &N); // Read value of N for each test case

        int odd = 0, even = 0;

        for (int i = 1; i <= N; i++) {
            if (N % i == 0) {
                if (i % 2 == 0)
                    even++;
                else?
                    odd++;?
        }

        // Print odd and even divisor counts
        printf("%d %d\n", odd, even);
    }

    return 0;
}
?
