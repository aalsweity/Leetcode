/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    // nums is the input arrray
    // numsSize is the size of nums array
    // target is the value to be found
    // returnSize is to hold the array size of solution. Note it is unitialized for some unknown reason.
    
    // How the actual F, am i'm supposed to figure out that returnSize is unitialized without allowing an output
    // system to check the function args if they have value or not!
    *returnSize = 2;
    int value1, value2;
    int* result = malloc(*returnSize * sizeof(int));
    for(int i =  0; i < numsSize; i++)
    {
        for(int j = i+1; j < numsSize; j++)
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
    return returnSize;
}
