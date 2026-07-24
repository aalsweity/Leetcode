class Solution 
{
public:
    int lengthOfLastWord(string s) 
    {   
        int count = 0; // start a count at 0
        int i = s.length()-1; // start check at end of string

        while(i >= 0 && s[i] == ' ') // while the string isn't over and has a space in it, drop the length till it reaches a non space char
        {
            i--;
        }
        while(i >= 0 && s[i] != ' ') // restart the loop when check hits a non space char and count and when a space char is hit, stop dropping length of string check.
        {
            count++;
            i--;
        }

        return count;
    }
};