class Solution 
{
public:
    bool isPalindrome(int x)
    {
        string istr = to_string(x); // string version of int
        int istrSize = istr.length(); // get length of new string of int say 3
        int i = 0;
        int j = istrSize - 1;
        while((i < istrSize) && (j >= 0))
        {
            if(istr[i] != istr[j]) // Remember. An if check won't start if it's not true.
                                    // If it were == instead, it would skip the check since it failed
                                    // and just keep checking blindly.
                {
                    return false;
                }
                i++;
                j--;
        }
        return true;
    }

    
};