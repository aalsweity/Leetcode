class Solution 
{
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string output = ""; //an empty result to start and to return if all cases fail.
        sort(strs.begin(), strs.end()); // sort vector first in alphabetical order.
        // reason is because, it turns out the questions is to check if what "all" index values have in common.
        // if 1 index is different in any way, the whole thing fails, take this example.
        // strs = {"flower", "flow", "cash"}
        // fl is going good for indexes 0 and 1 but index 2 is starts with 'c'. So, it fails the whole check since
        // they share nothing in common with index 0 and 1.
        // on a side note of how sort works, shortest strings length go first then it's alphabet priorty 2nd.
        // the last string is the longest and lowest in alphabetical order

        string first_str = strs[0]; // start with first string index in vector
        string last_str = strs[strs.size()-1]; // use last string element in vector for comparing, everything in between should be similar or not
        for(int i = 0; i < first_str.length(); i++) // since first index is the shortest, if all chars agreee with 
        // last string in vector, we can safely stop and not worry of going out of bounds.
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
};