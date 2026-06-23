public class Solution {
    public bool IsValid(string s) 
    {
        if(s.Length % 2 != 0) // if there is uneven amount of brackets, it fails immediately.
        {
            return false;
        }

        Stack<char> pstacks = new Stack<char>();
        for(int i = 0; i < s.Length; i++)
        {   
            // check if a valid starter is up and push it on the stack if true
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                pstacks.Push(s[i]);
            }

            // in cases not a starter opener
            else
            {
                // although we protected from a odd match, still can get empty at some point.
                if(pstacks.Count() == 0)
                {
                    return false;
                }
                
                // this will remove an occurence if valid
                if(pstacks.Peek() == '(' && s[i] == ')' || pstacks.Peek() == '{' && s[i] == '}' || pstacks.Peek() == '[' && s[i] == ']')
                {
                    pstacks.Pop();
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
        if(pstacks.Count() == 0)
        {
            return true;
        }
        // you got leftovers and no matches for them
        else
        {
            return false;
        }
    }
}