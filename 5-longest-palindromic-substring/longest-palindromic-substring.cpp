class Solution {
public:
    bool slove (string &s, int i, int j)
    {
        if(i >= j)
        {
            return true;
        }
        if(s[i] == s[j])
        {
            return slove(s,i+1,j-1);
        }
        return false;
    }
    string longestPalindrome(string s) {
       int n=s.length();
       int maxLen=INT_MIN;
       int startingPoint=0;

       for(int i=0; i<n; i++)
       {
        for(int j=i; j<n; j++)
        {
            if(slove(s,i,j) == true)
            {
                if(j-i+1 > maxLen)
                {
                    maxLen=j-i+1;
                    startingPoint=i;
                }
            }
        }
       }
      return s.substr(startingPoint,maxLen);
    }
};