//1. Two Sum
//Difficulty: Easy

class Solution {
    public int[] twoSum(int[] nums, int target) {
        int len=nums.length;
        int arr[]=new int[2];
        arr[0]=0;
        arr[1]=0;
        for(int i=0;i<len;i++)
        {
            for(int j=0;j<len;j++)
            {
                if(i!=j)
                {
                    if(target==nums[i]+nums[j])
                    {
                        arr[0]=i;
                        arr[1]=j;
                        return arr;
                    }
                }
            }
        }
        return arr;
    }
}
