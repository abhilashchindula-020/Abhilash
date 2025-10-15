#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        
        char s[n+1];
        scanf("%s", s);

        int alice_score = 0;
        int bob_score = 0;
        char server = 'A';

        for (int i = 0; i < n; i++) {
            if (server == 'A') {
                if (s[i] == 'A') {
                    alice_score++;
                } else {
                    server = 'B';
                }
            } else {
                if (s[i] == 'B') {
                    bob_score++;
                } else {
                    server = 'A';
                }
            }
        }
        printf("%d %d\n", alice_score, bob_score);
    }

    return 0;
}
