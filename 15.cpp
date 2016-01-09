class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int len = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ret;
        for(int i = 0; i < len; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1])
                continue;
            int left =  i + 1, right = len - 1;
            while(left < right)
            {
                if(nums[left] == nums[left - 1] && left > i + 1)
                {
                    left++;
                    continue;
                }
                if(nums[right] == nums[right + 1] && right + 1 <= len - 1)
                {
                    right--;
                    continue;
                }
                if(nums[left] + nums[right] + nums[i] < 0)
                    left++;
                if(nums[left] + nums[right] + nums[i] > 0)
                    right--;
                if(nums[left] + nums[right] + nums[i] == 0 && right > left)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);
                    ret.push_back(temp);
                    left++;
                }
            }
        }
        return ret;
    }
};
