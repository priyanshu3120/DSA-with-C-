class Solution {
public:
    bool isAlphaNum(char ch)
    {
        if(ch>='0' && ch<='9' || ch>='a' && ch<='z' || ch>='A' && ch<='Z')
        {
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while(i < j)
        {
            if(!isAlphaNum(s[i]))
            {
                i++;
                continue;
            }
            if(!isAlphaNum(s[j]))
            {
                j--;
                continue;
            }
            if(tolower(s[i]) != tolower(s[j]))
            {
                return false;
            }
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};