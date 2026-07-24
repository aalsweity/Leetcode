class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        auto it = lower_bound(nums.begin(), nums.end(), target); // note for me, learn more about algorithm library and how to use iterators.
        return distance(nums.begin(), it);
        
    }
};