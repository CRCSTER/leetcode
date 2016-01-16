class Solution {
private:
    vector<vector<int>> ret;
public:
    void dfs(vector<int>& nums, int i)
    {
        if(i == nums.size())
            ret.push_back(nums);
        else
        {
            for(int j = i; j < nums.size(); j++)
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                dfs(nums, i + 1);
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        dfs(nums, 0);
        return ret;
    }
};
