#include <stdio.h>
#include <string.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        char n[200001];
        scanf("%s", n);
        int len = strlen(n);
        if (n[len - 1] != '9') {
            n[len - 1]++;
            printf("%s\n", n);
        } else {
            int i = len - 1;
            while (i >= 0 && n[i] == '9') {
                n[i] = '0';
                i--;
            }
            if (i == -1) {
                printf("1");
                for (int j = 0; j < len; j++) {
                    printf("0");
                }
                printf("\n");
            } else {
                n[i]++;
                printf("%s\n", n);
            }
        }
    }
    return 0;
}
