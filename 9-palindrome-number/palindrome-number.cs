public class Solution {
    public bool IsPalindrome(int x) 
    {
        string istr = x.ToString();
        int istrlen = istr.Length;
        int i = 0;
        int j = istrlen - 1;
        while((i < istrlen) && (j >= 0))
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
}