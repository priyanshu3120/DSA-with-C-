class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
    
        unordered_map<int,int>mp;
        for(int nums : arr)
        {
            mp[nums]++;
        }
        int maxLucky=-1;
        for(auto& [num,freq] : mp)
        {
            if(num == freq)
            {
                maxLucky=max(maxLucky,num);
            }
        }
        return maxLucky;
    }
};