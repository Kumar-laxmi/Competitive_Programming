int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int low = 0;
    int high = n - 1;
    
    while(low<=high) {
        int mid = (low + high)/2;
        
        if(input[mid] == val) {
            return mid;
        }
        else if(input[mid]<val) {
            low = mid + 1;
        }
        else if(input[mid]>val) {
            high = mid - 1;
        }
    }
    return -1;
}
