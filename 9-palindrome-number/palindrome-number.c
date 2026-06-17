bool isPalindrome(int x) 
{
    char icarr[12]; // 2^31 is 10 digits at most, so reserve this much space as needed for problem.
    sprintf(icarr, "%d", x);
    int icarrSize = strlen(icarr); // sizeof(icarr)/sizeof(icarr[0]); Do not use or else you get 10 as length of string
    int i = 0;                     // use strlen() function from string.h library. Assume leetcode gives all library use.
    int j = icarrSize - 1;
    while((i < icarrSize) && (j >= 0))
    {   
        
        if(icarr[i] != icarr[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}