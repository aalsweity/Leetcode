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
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                pstacks.push(s[i]);
            }

            else
            {
                if(pstacks.empty())
                {
                    return false;
                }

                if(pstacks.top() == '(' && s[i] == ')' || pstacks.top() == '{' && s[i] == '}' || pstacks.top() == '[' && s[i] == ']')
                {
                    pstacks.pop();
                }

                else
                {
                    return false;
                }

            }
            
        }    
        if(pstacks.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};