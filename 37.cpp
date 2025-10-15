#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases

    while (T--) {
        int N;
        scanf("%d", &N);  // Read number of tests

        int scores[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &scores[i]);  // Read each score
        }

        int total = 0;
        int lost = 0;

        for (int i = 0; i < N; i++) {
            total += scores[i];
            double avg = (double)total / (i + 1);

            if (avg < 40) {
                lost = 1;
                break;  // No need to check further
            }
        }

        if (lost)
            printf("No\n");
        else
            printf("Yes\n");
    }

    return 0;
}
