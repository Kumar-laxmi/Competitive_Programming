#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int num,sum=0;
	    cin>>num;
	    while(num>0)
	    {
	        sum = (sum*10)+(num%10);
	        num/=10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
