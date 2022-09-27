class Solution
{
    //Function to return the minimum cost of connecting the ropes.
    long minCost(long arr[], int n) 
    {
        // your code here
        PriorityQueue<Long> elements = new PriorityQueue<Long>();
        
        for(int i=0; i<arr.length; i++) {
            elements.add(arr[i]);
        }
        
        long sum = 0;
        
        while(elements.size() > 1) {
            long a = elements.poll();
            long b = elements.poll();
            elements.add(a + b);
            
            sum += (a + b);
        }
        
        return sum;
    }
}
