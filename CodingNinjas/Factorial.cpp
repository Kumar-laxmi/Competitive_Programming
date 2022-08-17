#include <iostream>
using namespace std;

long long int factorial(int n) {
    if(n<=1) {
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}

int main() {
    //Write your code here
    long long int n;
    cin>>n;
    if(n < 0) cout<<"Error";
    else cout<<factorial(n);
    return 0;
}
