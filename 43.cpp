#include <stdio.h>
#include <string.h>

int main() {
	int t;
	scanf("%d",&t);
	while (t--){
	    int n;
	    scanf("%d",&n);
	    char s[n + 1];
	    scanf("%s",s);
	    int count = 0;
	    for (int i = 0; i < n - 1; i++){
	        if (s[i] ==s[i+1]) {
	            count++;	     
	       }
	    }
	    printf("%d\n",count);
	}

   return 0;
}

