#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases
    
    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);  // Read N (size of the array) and M (modulo value)
        
        int sum = 0;
        for (int i = 0; i < N; i++) {
            int num;
            scanf("%d", &num);  // Read each element of the array
            sum += num;
        }

        // The minimum sum will always be 0 after the operations
        printf("0\n");
    }
    
    return 0;
}
