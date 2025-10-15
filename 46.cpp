#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[1001];
        scanf("%s", s);
        int n = strlen(s);
        bool happy = false;
        for (int i = 0; i <= n - 3; i++) {
            if (isVowel(s[i]) && isVowel(s[i + 1]) && isVowel(s[i + 2])) {
                happy = true;
                break;
            }
        }
        if (happy) {
            printf("HAPPY\n");
        } else {
            printf("SAD\n");
        }
    }
    return 0;
}
