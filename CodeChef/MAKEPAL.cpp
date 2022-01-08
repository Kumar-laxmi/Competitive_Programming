#include <bits/stdc++.h> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t,n,i,x;
	cin>>t;
	while(t--)
	{
	    int c=0;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>x;
	        if(x%2==1)
	        {
	            c++;
	        }
	    }
	    if(c%2==1)
	    {
	        c--;
	    }
	    cout<<c/2<<endl;
	}
	return 0;
}
