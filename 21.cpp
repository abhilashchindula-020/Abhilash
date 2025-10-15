//Change the 'custom inputs' below and click 'run'
//Click on 'Submit' once you have tried out to proceed to the next problem

#include <stdio.h>

int main() {
    int t;
    int n;
    int i = 1;
    scanf("%d\n", &t);
    while (i <= t) {
        scanf("%d", &n);
        printf("%d\n", n + 1);
        i = i + 1;
    }
}
