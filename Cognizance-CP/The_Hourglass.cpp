#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    
    char base = 'a';
    
    // Upper Half
    for(int row = n; row>=1; --row) {
        for(int space=0; space<n-row; space++) {
            cout<<"  ";
        }
        int r = row - 1;
        for(int c=0; c<2*row - 1; c++) {
            if(c < row) {
                cout<<char(base + c%26)<<" ";
            }
            else {
                cout<<char(base + (--r)%26)<<" ";
            }
        }
        cout<<endl;
    }
    
    // Lower Half
    for(int row = 2; row < n+1; row++) {
        for(int space=0; space<n - row; space++) {
            cout<<"  ";
        }
        int r = row - 1;
        for(int c=0; c<2*row - 1; c++) {
            if(c < row) {
                cout<<char(base + c%26)<<" ";
            }
            else {
                cout<<char(base + (--r)%26)<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
