/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ret;
        stack<TreeNode*> ss;
        TreeNode* p = root;
        while(p != NULL || !ss.empty())
        {
            while(p != NULL)
            {
                ret.push_back(p->val);
                ss.push(p);
                p = p->left;
            }
            if(!ss.empty())
            {
                p = ss.top();
                ss.pop();
                p = p->right;
            }
        }
        return ret;
    }
};
