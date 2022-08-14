#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    vector<int> unique;
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<unique.size(); j++) {
            if(arr[i] == unique[j]) {
                return arr[i];
            }
        }
        unique.push_back(arr[i]);
    }
}
