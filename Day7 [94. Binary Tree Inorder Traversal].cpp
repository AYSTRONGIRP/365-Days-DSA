/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        stack<TreeNode *> q;
        vector<int> v;
        // q.push(root);
        TreeNode *temp = root;
        while (temp != NULL || !q.empty())
        {

            if (temp != NULL)
            {
                q.push(temp);
                temp = temp->left;
            }
            else
            {
                if (!q.empty())
                {
                    temp = q.top();
                    q.pop();
                    v.push_back(temp->val);
                    // q.push(temp->right);
                    temp = temp->right;
                }
            }
        }
        return v;
    }
};