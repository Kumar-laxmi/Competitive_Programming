#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    
    while(t>0) {
        int e,k, sol;
        cin>>e>>k;
        
        if(e > 999999) {
            cout<<"-1"<<endl;
        }
        else {
            sol = e ^ k;
            cout<<sol<<endl;
        }
        t -= 1;
    }
    return 0;
}
