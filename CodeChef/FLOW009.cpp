#include <bits/stdc++.h> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
	    int q,p;
	    cin>>q>>p;
	    double cost = (q*p);
	    if(q>1000)
	    {
	        cost-=0.1*cost;
	    }
	    cout<<setprecision(10)<<endl;
	    cout<<cost<<endl;
	}
	return 0;
}
