#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // your code goes here
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s[n];
        string s1="";
        string s2="";
        if(n==0)
        {
            cout<<"Draw"<<endl;
        }
        else
        {
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        s1=s[0];
        for(int i=0;i<n;i++)
        {
            if(s1!=s[i])
            {
                s2=s[i];
                break;
            }
        }
        int a[2]={0};
        for(int i=0;i<n;i++)
        {
            if(s[i]==s1)
            a[0]++;
            else if(s[i]==s2)
            a[1]++;
        }
        if(a[1]==a[0])
        {
            cout<<"Draw"<<endl;
        }
        else
        {
            if(a[0]>a[1])
            cout<<s1<<endl;
            else
         
            cout<<s2<<endl;
        }
        }
    }
    
    return 0;
}
