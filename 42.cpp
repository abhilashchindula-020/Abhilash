#include <stdio.h>
#include <string.h>

int main(){
    int T;
    scanf("%d",&T);
    
    while(T--){
        char S[6];
        char T[6];
        scanf("%s %s",S,T);
        
        for (int i = 0; i < 5; i++){
            if (S[i] == T[i]){
                printf("G");
            } else{
                printf("B");
            }
        }
        printf("\n");
    }
    return 0;
}
