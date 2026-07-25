class Solution 
{
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int last_indx = digits.size() - 1;
        for(int i = last_indx; i >= 0; --i)
        {
            if(digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};