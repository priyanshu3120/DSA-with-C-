class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n=nums.size();

        int evenCount=0;
        int oddCount=0;
        
        for(int &num : nums)
        {
            if(num % 2 ==0)
            evenCount++;
            else
            oddCount++;
        }
        
        int alterCount=1;
        int prevEle=nums[0] % 2;

        for(int i=1; i<n; i++)
        {
            int currEle=nums[i] % 2;
            if(currEle != prevEle)
            {
                alterCount++;
            }
            prevEle=currEle;
        }
        return max({evenCount,oddCount,alterCount});
    }
};