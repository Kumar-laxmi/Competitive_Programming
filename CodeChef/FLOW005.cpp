#include <bits/stdc++.h> 
using namespace std;
int currency(int,int);

int currency(int n,int count)
{
    if(n==0)
    {
        return count;
    }
    count++;
    if(n>=100)
    {
        return currency(n-100,count);
    }
    else if(n>=50)
    {
        return currency(n-50,count);
    }
    else if(n>=10)
    {
        return currency(n-10,count);
    }
    else if(n>=5)
    {
        return currency(n-5,count);
    }
    else if(n>=2)
    {
        return currency(n-2,count);
    }
    else if(n>=1)
    {
        return currency(n-1,count);
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--)
	{
	    int num;
	    cin>>num;
	    int count = currency(num,0);
	    cout<<count<<endl;
	}
	return 0;
}
