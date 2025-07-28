class Solution {
public:
    void findSubsets(int index, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans) {
          if(index == nums.size())
          {
             ans.push_back(ds);
             return;
          }
          
          ds.push_back(nums[index]);
          findSubsets(index+1,nums,ds,ans);
          ds.pop_back();

          int idx=index+1;
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