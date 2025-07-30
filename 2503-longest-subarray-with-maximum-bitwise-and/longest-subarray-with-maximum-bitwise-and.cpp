class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxVal=0;
        int result=0;
        int steak=0;

        for(int num : nums)
        {
            if(num > maxVal)
            {
                maxVal=num;
                result=0;
                steak=0;
            }
            if(num == maxVal)
            {
                steak++;
            }
            else
            {
                steak=0;
            }
            result=max(result,steak);
        }
        return result;
    }
};