public class Solution 
{
    public string LongestCommonPrefix(string[] strs) 
    {
        string output = ""; // set output for answer
        Array.Sort(strs); // sort arrays first

        string first_str = strs[0]; // start with first string index in vector
        string last_str = strs[strs.Length-1]; // use last string element in vector for comparing, everything in between should be similar or not
        for(int i = 0; i < first_str.Length; i++)
        {
             if(first_str[i] != last_str[i])
            {
                break; // if first and last aren't the same on the first char, break and return nothing
            }
            else
            {
                output += first_str[i]; // else start checking what they have in common and append the char to the output
            }
        }
        return output;
    }
}