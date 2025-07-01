class Solution {
public:
    int longestSubsequence(string s, int k) {
        int n=s.length();
        int len=0;
        int powerVal=1;
        for(int i=n-1; i>=0; i--)
        {
            if(s[i] == '0')
            {
                len++;
            }
            else if(powerVal <= k)
            {
                k = k - powerVal;
                len++;
            }
            if(powerVal <= k)
            {
                powerVal *= 2;
            }
        }
        return len;
    }
};