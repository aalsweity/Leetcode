class Solution 
{
public:
    int mySqrt(int x) 
    {
        
        if(x == 0)
        {
            return 0;
        }
        int low = 1; // lowest possible value
        int high = x; // highest value possible.
        int result;
        while(low <= high)
        {
            long int mid = low + (high - low)/2; // for some reason, int is not big enough for test cases
            
            if(mid*mid <= x) // change bounds to higher if number is equal or higher.
            {
                result = mid;
                low = mid + 1;
            }
            else // change bounds ot lower otherwise
            {
                high = mid - 1;
            }
        }
        return result;
    }
};