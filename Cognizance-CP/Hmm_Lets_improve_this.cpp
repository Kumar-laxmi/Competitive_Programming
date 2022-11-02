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
    int zero = n;
    int one = 0;
    
    for(int i=0; i<n; i++) {
        if(one != 0) {
            for(int j=0; j<one; j++) {
                cout<<"1  ";
            }
        }
        if(zero != 0) {
            for(int j=0; j<zero; j++) {
                cout<<"0  ";
            }
        }
        for(int j=0; j<n; j++) {
            cout<<"1  ";
        }
        if(zero != 0) {
            for(int j=0; j<zero; j++) {
                cout<<"0  ";
            }
        }
        if(one != 0) {
            for(int j=0; j<one; j++) {
                cout<<"1  ";
            }
        }
        one++;
        zero--;
        cout<<endl;
    }
    
    return 0;
}
