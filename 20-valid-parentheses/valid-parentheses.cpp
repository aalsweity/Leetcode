// this solution took me 4H 12M 42S to solve. First time with stacks in years.
class Solution 
{
public:
    bool isValid(string s) 
    {   
        if(s.length() % 2 != 0) // if there is uneven amount of brackets, it fails immediately.
        {
            return false;
        }
        // the stack to hold the brackets
        stack<char> pstacks;

        // push items on stack from first string index as last to last index as top item
        // while you are at it, check if there are valid
        for(int i = 0; i < s.length(); i++)
        {   
            // check if a valid starter is up and push it on the stack if true
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                pstacks.push(s[i]);
            }

            // in cases not a starter opener
            else
            {
                // although we protected from a odd match, still can get empty at some point.
                if(pstacks.empty())
                {
                    return false;
                }
                
                // this will remove an occurence if valid
                if(pstacks.top() == '(' && s[i] == ')' || pstacks.top() == '{' && s[i] == '}' || pstacks.top() == '[' && s[i] == ']')
                {
                    pstacks.pop();
                }

                // in case of a mismatch occuring
                else
                {   
                    // end the game early
                    return false;
                }

            }
            
        }    
        // if everything went smoothly and nothing to match
        if(pstacks.empty())
        {
            return true;
        }
        // you got leftovers and no matches for them
        else
        {
            return false;
        }
        
    }
};