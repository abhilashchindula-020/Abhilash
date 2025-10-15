#include <stdio.h>
#include <string.h>

int main() {
	int T ,X ,i;
	char S[15];
	
	scanf("%d", &T);
	
	while (T--){
	    scanf("%d", &X);
	    scanf("%s", S);
	    
	    int carlsen_win = 0;
	    int chef_wins = 0;
	     
	     for(i = 0; i < 14; i++){
	         if (S[i] == 'C'){
	             carlsen_win++;
	         }else if (S[i] == 'N'){
	             chef_wins++;
	         }
	     }
	     if (carlsen_win > chef_wins){
	         printf("%d\n", 60 * X);
	     }else if(carlsen_win == chef_wins){
	         printf("%d\n",55 * X);
	         
	     }else {
	         printf("%d\n",40 * X);
	     }
	}
	return 0;

}

