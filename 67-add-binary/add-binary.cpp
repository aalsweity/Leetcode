class Solution 
{
public:
    string addBinary(string a, string b) 
    {
        // int a_bin = stoi(a, nullptr, 2); Always converts to a decimal, so don't use.
        // bitset<8> abin(a); won't work because 10^4 is 10000 digits long. No way to keep up.
        string res = "";
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';
            
            res += to_string(sum % 2);
            carry = sum / 2;
        }

        reverse(res.begin(), res.end());
        return res;
        
    }
};