class Solution {
public:
    int countSubset(int index,vector<int> &nums,int currOR,int maxOR)
    {  if(index == nums.size())
       {
          if(currOR == maxOR)
          {
            return 1;
          }
          return 0;
       }

       int takeCount = countSubset(index+1,nums,currOR | nums[index],maxOR);

       int notakeCount = countSubset(index+1,nums,currOR,maxOR);

       return takeCount + notakeCount; 
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int maxOR=0;
        for(int &num : nums)
        {
            maxOR |= num;
        }
        
        int currOR=0;

        return countSubset(0,nums,currOR,maxOR);
    }
};