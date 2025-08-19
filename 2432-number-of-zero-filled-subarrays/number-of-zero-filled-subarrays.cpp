class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        
        // 1st appraoch using a maths 
        // long long result=0;
        // int n=nums.size();
        // int i=0;
        // while(i < n)
        // {
        //     long long l=0;
        //     if(nums[i] == 0)
        //     {
        //         while(i < n && nums[i] == 0)
        //         {
        //             l++;
        //             i++;
        //         }
        //     }
        //     else
        //     {
        //         i++;
        //     }
        //     result += l*(l+1)/2;
        // }
        // return result;

        // 2nd approached to sloved the problem
        int n=nums.size();

        long long result=0;
        int count=0;

        for(int i=0; i<n; i++)
        {
            if(nums[i] == 0)
            {
                count++;
            }
            else
            {
                count=0;
            }
            result += count;
        }
        return result;
    }
};