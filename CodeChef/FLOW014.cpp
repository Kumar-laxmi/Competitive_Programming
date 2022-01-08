#include <bits/stdc++.h> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
	    int a,c;
	    float b;
	    int c1=0,c2=0,c3=0;
	    cin>>a>>b>>c;
	    if(a>50)
	    {
	        c1=1;
	    }
	    if(b<0.7)
	    {
	        c2=1;
	    }
	    if(c>5600)
	    {
	        c3=1;
	    }
	    if(c1==1 && c2==1 && c3==1)
	    {
	        cout<<"10"<<endl;
	    }
	    else if(c1==1 && c2==1 && c3==0)
	    {
	        cout<<"9"<<endl;
	    }
	    else if(c1==0 && c2==1 && c3==1)
	    {
	        cout<<"8"<<endl;
	    }
	    else if(c1==1 && c2==0 && c3==1)
	    {
	        cout<<"7"<<endl;
	    }
	    else if(c1==1 || c2==1 || c3==1)
	    {
	        cout<<"6"<<endl;
	    }
	    else
	    {
	        cout<<"5"<<endl;
	    }
	}
	return 0;
}
