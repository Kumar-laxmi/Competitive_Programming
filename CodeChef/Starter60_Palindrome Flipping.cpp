#include <iostream>
using namespace std;

int main() {
	//your code goes here
	int t;cin>>t;
	for(;t>0;t--){
	    int p=0,q=0,a;cin>>a;
	    string s;cin>>s;
	    for(int i=0;i<a;i++){
	        if(s[i]=='1'){
	            p+=1;
	        }
	        else{
	            q+=1;
	        }
	    }
	    if(a%2==0){
	        if(p%2==0 and q%2==0){
	            cout<<"YES"<<endl;
	        }
	        else{
	            cout<<"NO"<<endl;
	        }
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
