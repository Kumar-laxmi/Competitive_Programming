#include<stdio.h>
int main(){
    
    int r;
    scanf("%d",&r);
    for(int i=0;i<r;i++){
        int c,d,l,total1=0,total2=0;
        scanf("%d %d %d",&c,&d,&l);
        total1=(l/4)-d;
	    total2=c-total1;
	    if(total1<0 || total2<0 || l%4!=0 || total2>2*d)
	    {
	        printf("no\n");
	    }
	    else
	    {
	        printf("yes\n");
	    }
    }
    
    
    return 0;
}


