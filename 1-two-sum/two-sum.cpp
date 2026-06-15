// Solution by Anas Al-Sweity
class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
     {
        int value1, value2;
        for(int i = 0; i<nums.size(); i++)
        {
            
            for(int j=i+1; j< nums.size(); j++)
            {
                value1 = nums.at(i);
                value2 = nums.at(j);
                if ((value1 + value2) == target)
                    {
                        return {i,j};
                    }
            }
        }
        return {};
    }
};