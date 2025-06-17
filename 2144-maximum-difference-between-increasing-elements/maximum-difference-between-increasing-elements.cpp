class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
      // 1st method time complexity O(n^2)
        // int ans=-1;
        // for(int i=0; i<n-1; i++)
        // {
        //     for(int j=i+1; j<n; j++)
        //     {
        //         if(nums[i]<nums[j])
        //         {
        //             ans=max(ans,nums[j]-nums[i]);
        //         }
        //     }    
        // }
        // return ans;

        // 2nd method with time complexity O(n)
        int minVal=nums[0];
        int result=-1;
        for(int i=1; i<n; i++)
        {
            if(nums[i]>minVal)
            {
                result=max(result,nums[i]-minVal);
            }
            else
            {
                minVal=nums[i];
            }
        }
        return result;
    }
};