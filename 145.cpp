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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ret;
        if(root == NULL)
            return ret;
        stack<TreeNode*> ss;
        TreeNode* p = root;
        ss.push(p);
        while(!ss.empty())
        {
            p = ss.top();
            if(p->left == NULL && p->right == NULL)
            {
                ret.push_back(p->val);
                ss.pop();
            }
            if(p->right != NULL)
            {
                ss.push(p->right);
                p->right = NULL;
            }
            if(p->left != NULL)
            {
                ss.push(p->left);
                p->left = NULL;
            }
        }
        return ret;
    }
};
