#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int num,last;
	    cin>>num;
	    int first = num%10;
	    while(num>0)
	    {
	        last = num%10;
	        num=num/10;
	    }
	    cout<<first+last<<endl;
	}
	return 0;
}
