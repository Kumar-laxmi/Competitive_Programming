#include <iostream>
using namespace std;

int main() {
	int t,n,x,y;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n>>x>>y;
	    int s = y*(n+1);
	    if(s>=x)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
