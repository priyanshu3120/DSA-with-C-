class Solution {
public:
    void findSubsets(int i, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans) {
          if(i == nums.size())
          {
             ans.push_back(ds);
             return;
          }
          
          ds.push_back(nums[i]);
          findSubsets(i+1,nums,ds,ans);
          ds.pop_back();

          int idx=i+1;
          while(idx < nums.size() && nums[idx] == nums[idx-1])
          {
            idx++;
          }
          findSubsets(idx,nums,ds,ans);
        }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans; 
        vector<int> ds; 
        sort(nums.begin(), nums.end()); 
        findSubsets(0, nums, ds, ans);
        return ans; 
    }
};