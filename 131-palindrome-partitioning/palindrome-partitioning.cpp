class Solution {
public:
    bool isPalindrome(string &s,int l, int r)
    {
        while(l <= r)
        {
            if(s[l] != s[r])
            return false;

            l++;
            r--;
        }
        return true;
    }
    void getPartitioning(string &s,int idx,vector<string>&curr,vector<vector<string>>&ans)
    {   
        int n=s.length();
        if(idx == n){
            ans.push_back(curr);
            return;
        }
        for(int i=idx; i<n; i++)
        {
            if(isPalindrome(s,idx,i))
            {
                curr.push_back(s.substr(idx,i-idx+1));
                getPartitioning(s,i+1,curr,ans);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>curr;

        getPartitioning(s,0,curr,ans);
        return ans;
    }
};