//Change the 'custom inputs' below and click 'run'
//Once you have run the code - click on 'submit' to find the result with the private test files

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
