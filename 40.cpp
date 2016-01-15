class Solution {
private:
    vector<vector<int>> ret;
    vector<int> temp;
public:
    void dfs(vector<int>& candidates, int left, int idx)
    {
        if(left == 0)
            ret.push_back(temp);
        else
        {
            for(int i = idx; i < candidates.size(); i++)
            {
                if(i != idx && candidates[i] == candidates[i - 1])
                //第一次进函数时如果前后两个数相同，表明前一个已经被使用，此时才能用这个相同值    
                    continue;
                if(left >= candidates[i])
                {
                    temp.push_back(candidates[i]);
                    dfs(candidates, left - candidates[i], i + 1);
                    temp.pop_back();
                }
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        dfs(candidates, target, 0);
        return ret;
    }
};
