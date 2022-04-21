// C function to find maximum in arr[] of size n
int largest(int arr[], int n) {
    int largest = arr[0];
    
    for(int i=0;i<n;i++) {
        if(arr[i]>largest) {
            largest = arr[i];
        }
    }
    return largest;
}
