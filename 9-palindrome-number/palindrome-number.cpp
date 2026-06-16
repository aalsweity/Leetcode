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
            if(istr[i] != istr[j])
                {
                    return false;
                }
                i++;
                j--;
        }
        return true;
    }

    
};