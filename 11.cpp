class Solution {
public:
    int maxArea(vector<int>& height) {
        int len = height.size();
        int ret = 0, left = 0, right = len - 1;
        int cur = 0;
        while(left < right)
        {
            cur = min(height[left], height[right]) * (right - left);
            ret = max(ret, cur);
            if(height[left] > height[right])
                right--;
            else
                left++;
        }
        return ret;
    }
};
