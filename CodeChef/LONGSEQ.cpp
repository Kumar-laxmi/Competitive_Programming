#include <bits/stdc++.h> 
using namespace std;

#define ll long long

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--){
		string s;cin>>s;ll n=s.size();ll c0=0,c1=0;
		for(ll i=0;i<n;i++){
		if(s[i]=='0') c0++;
		if(s[i]=='1') c1++;
		}
		ll x=min(c0,c1);
		if(x==1||n==1) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}
