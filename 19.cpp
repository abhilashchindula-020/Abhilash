// Update the blanks below to solve the problem
#include <stdio.h>

int main() {
    int t;
    int A, B, C, D, E;
    int i = 1;
    scanf("%d", &t );
    while (i <= t) {
        scanf("%d %d", &A, &B );
        scanf("%d %d %d ", &C, &D, &E );
        printf("%d %d %d %d %d\n", A, B, C, D, E);
        i = i + 1;
    }
}
