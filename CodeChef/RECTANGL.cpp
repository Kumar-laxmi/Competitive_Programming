#include <bits/stdc++.h> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
	    vector<int> side;
	    int a;
	    for(int i=0;i<4;i++)
	    {
	        cin>>a;
	        side.push_back(a);
	    }
	    sort(side.begin(),side.end());
	    if(side[0]==side[1] && side[2]==side[3])
	    {
	        cout<<"YES\n";
	    }
	    else
	    {
	        cout<<"NO\n";
	    }
	}
	return 0;
}
