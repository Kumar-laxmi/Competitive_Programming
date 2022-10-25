// 342. Power of Four
// Difficulty: Easy

class Solution {
    public boolean isPowerOfFour(int n) {
        return (n > 0) && ((n & 0xaaaaaaaa) == 0) && ((n & (n-1)) == 0);
    }
}
