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
        int x,y;
        cin>>x>>y;
        cout<<10*x + 90*y<<endl;
        t--;
    } 
    return 0;
}
