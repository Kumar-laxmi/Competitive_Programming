#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isprime(int n) {
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t, n, x;
    cin>>t;
    while(t>0) {
        cin>>n;
        do {
            x = n;
        }
        while(!isprime(n--) && n>=2);
        
        for(int i=n; i>0; i--) {
            if(isprime(i)) {
                x ^= i;
            }
        }
        cout<<x<<endl;
        t--;
    }
    return 0;
}
