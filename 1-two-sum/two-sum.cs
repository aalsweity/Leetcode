public class Solution {
    public int[] TwoSum(int[] nums, int target) 
    {   
        int value1, value2;
        int[] result = new int[2];
        for(int i = 0; i < nums.Length; i++)
        {
            for(int j = i+1; j < nums.Length; j++)
            {
                value1 = nums[i];
                value2 = nums[j];
                if((value1 + value2) == target)
                {
                    result[0] = i;
                    result[1] = j;
                    return result;
                }
            }
        }
        return new int[0];
    }
}