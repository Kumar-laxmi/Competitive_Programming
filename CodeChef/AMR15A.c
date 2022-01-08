#include <stdio.h>

int main(void) {
	// your code goes here
	int num;
	scanf("%d",&num);
	int arr[num];
	for(int i=0;i<num;i++)
	{
	    scanf("%d",&arr[i]);
	}
	int even=0,odd=0;
	for(int i=0;i<num;i++)
	{
	    if(arr[i]%2==0)
	    {
	        even++;
	    }
	    else
	    {
	        odd++;
	    }
	}
	if(even>odd)
	{
	    printf("READY FOR BATTLE\n");
	}
	else
	{
	    printf("NOT READY\n");
	}
	return 0;
}
