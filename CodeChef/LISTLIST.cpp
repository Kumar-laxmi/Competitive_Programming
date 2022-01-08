#include <bits/stdc++.h> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    int mx = 1;
	    int c = 1;
	    
	    sort(a,a+n);
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==a[i-1])
	        {
	            c++;
	            mx = max(mx,c);
	        }
	        else
	        {
	            c=1;
	        }
	    }
	    if(n==mx)
	    {
	        cout<<0<<endl;
	        continue;
	    }
	    if(mx==1)
	    {
	        cout<<-1<<endl;
	        continue;
	    }
	    
	    cout<<(n-mx)+1<<endl;
	}
	return 0;
}
