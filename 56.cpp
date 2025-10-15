#include <stdio.h>
#include <string.h>

int main() {
    int T,abs;
    scanf("%d", &T);  // Read the number of test cases

    // Process each test case
    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);  // Read the total number of matches and the number of already played matches
        char S[M + 1];  // Binary string for the results of already played matches
        scanf("%s", S);  // Read the binary string

        // Count Alice's and Bob's wins
        int count_1 = 0;  // Alice's wins
        int count_0 = 0;  // Bob's wins

        // Count the number of wins for Alice and Bob
        for (int i = 0; i < M; i++) {
            if (S[i] == '1') {
                count_1++;
            } else if (S[i] == '0') {
                count_0++;
            }
        }

        // The remaining matches
        int remaining_matches = N - M;

        // Check if a tie is still possible
        if (abs(count_1 - count_0) <= remaining_matches) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
