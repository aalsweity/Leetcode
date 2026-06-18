public class Solution 
{
    public int RomanToInt(string s) 
    {
        int size = s.Length;
        int sum = 0;
        for(int i = 0; i < size; i++)
        {
            if(s[i] == 'I')
            {
                if(i + 1 < size && s[i+1] == 'V') // compared to C++, this check will now check out of bounds in C#
                {
                    sum += 4;
                    i++;
                    continue;
                }
                if(i + 1 < size && s[i+1] == 'X')
                {
                    sum += 9;
                    i++;
                    continue;
                } 
                sum +=1;
            }
            
            if(s[i] == 'V')
            {
                sum += 5;
            }

            if(s[i] == 'X')
            {
                if(i + 1 < size && s[i+1] == 'L')
                {
                    sum += 40;
                    i++;
                    continue;
                }
                if(i + 1 < size && s[i+1] == 'C')
                {
                    sum += 90;
                    i++;
                    continue;
                }   
                sum += 10;
            }

            if(s[i] == 'L')
            {
                sum += 50;
            }

            if(s[i] == 'C')
            {
                if(i + 1 < size && s[i+1] == 'D')
                {
                    sum += 400;
                    i++;
                    continue;
                }
                if(i + 1 < size && s[i+1] == 'M')
                {
                    sum += 900;
                    i++;
                    continue;
                }
                sum += 100;
            }
            

            if(s[i] == 'D')
            {
                sum += 500;
            }

            if(s[i] == 'M')
            {
                sum += 1000;
            }
        }
        return sum;
    }
}