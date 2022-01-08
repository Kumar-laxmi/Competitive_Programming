#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int sal;
	    float hra,da;
	    scanf("%d",&sal);
	    if(sal<1500)
	    {
	        hra = 0.1*sal;
	        da = 0.9*sal;
	    }
	    else
	    {
	        hra = 500;
	        da = 0.98*sal;
	    }
	    printf("%0.2f\n",sal+hra+da);
	}
	return 0;
}
