#include <bits/stdc++.h> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if(x%2!=0)
	    {
	        cout<<"NO \n";
	        continue;
	    }
	    if(x==0 && y%2!=0)
	    {
	        cout<<"NO \n";
	        continue;
	    }
	    else if(x==0 && y%2==0)
	    {
	        cout<<"YES \n";
	        continue;
	    }
	    if((x+2*y)%2==0)
	    {
	        cout<<"YES \n";
	        continue;
	    }
	}
	return 0;
}
