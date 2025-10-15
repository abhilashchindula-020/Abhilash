// Debug the given code

#include <stdio.h>

int main() {
    int t;
    int N;
    int i = 1;
    scanf("%d", &t);
    while (i <= t) {
        scanf("%d", &N);
        printf("%d\n", 2 * N);
        i = i + 1;
    }
}
