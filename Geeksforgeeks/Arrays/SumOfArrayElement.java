class Get
{
    public static int sumElement(int arr[], int n)
    {
        int sum = 0;
        
        for(int i=0; i<n; i++) {
            sum = sum + arr[i];
        }
        
        return sum;
    }
}
