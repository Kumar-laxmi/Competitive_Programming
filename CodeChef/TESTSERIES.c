#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,c1=0,c2=0;
	    for(int i=0;i<5;i++){
	        scanf("%d",&n);
	        if(n==1){
	            c1++;
	        }
	        else if(n==2){
	            c2++;
	        }
	    }
	    if(c1>c2){
	        printf("INDIA\n");
	    }
	    else if(c1<c2){
	        printf("ENGLAND\n");
	    }
	    else{
	        printf("DRAW\n");
	    }
	}
	return 0;
}
