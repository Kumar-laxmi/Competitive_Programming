#include <stdio.h>
#include <math.h>
int isPrime(int);

int isPrime(int num)
{
    int i;
    for(i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    int i,res;
	    for(i=x+y+1;;i++)
	    {
	        if(isPrime(i)==1)
	        {
	            res = i-(x+y);
	            break;
	        }
	    }
	    printf("%d\n",res);
	}
	return 0;
}
