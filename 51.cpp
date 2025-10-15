#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int total = A * B;
    int invalid = (A < B) ? A : B;  // min(A, B)
    int valid = total - invalid;

    printf("%d\n", valid);
    return 0;
}
