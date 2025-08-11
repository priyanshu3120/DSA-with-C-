class Solution {
public:
    string sortedDigit(int n)
    {
        string s=to_string(n);
        sort(s.begin(),s.end());
        return s;
    }
    bool reorderedPowerOf2(int n) {
        string s=sortedDigit(n);

        for(int i=0; i<=29; i++)
        {
            if(s == sortedDigit(pow(2,i))) // instead of pow(2,i) we also use (1 << i)
            {
                return true;
            }
        }
        return false;
    }
};