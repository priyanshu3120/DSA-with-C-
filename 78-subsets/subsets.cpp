class Solution {
private:
void subSet(vector<int> &nums,vector<int> &output,int index,vector<vector<int>> &ans)
{
    if(index == nums.size())
    {
        ans.push_back(output);
        return;
    }
    //include
    output.push_back(nums[index]);
    subSet(nums,output,index+1,ans);
    output.pop_back();

    //exclude
    subSet(nums,output,index+1,ans);
}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;

        subSet(nums,output,0,ans);
        return ans;
    }
};