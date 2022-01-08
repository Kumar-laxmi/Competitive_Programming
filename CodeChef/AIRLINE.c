#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	for(int t=0;t<T;t++){
	    int a,b,c,d,e;
	    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	    if(a+b <= d && c<=e){
	        printf("YES\n");
	    }
	    else if(b+c <= d && a<=e){
	        printf("YES\n");
	    }
	    else if(c+a <= d && b<=e){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;
}
