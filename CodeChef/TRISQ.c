#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int b;
	    scanf("%d",&b);
	    int sum=0;
	    while(b>0)
	    {
	        sum+=(b-2)/2;
	        b-=2;
	    }
	    printf("%d\n",sum);
	}
	return 0;
}

