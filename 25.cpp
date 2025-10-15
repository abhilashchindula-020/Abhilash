// The code below is incorrect. Debug this code to solve the problem.

#include <stdio.h>

int main() {
    int t,X,Y;
    int i = 1;
    int prize_top10;
    int prize_11to100;
    scanf("%d", &t );
    while (i <= t){
        scanf("%d %d", &X, &Y);
        prize_top10 = 10*X;
        prize_11to100 =90*Y;
        printf("%d\n", prize_top10 + prize_11to100);
        i = i+1;
    }
    return 0;
 }
