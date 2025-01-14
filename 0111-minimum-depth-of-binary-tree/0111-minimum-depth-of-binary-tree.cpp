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
class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        queue<TreeNode*> queue;
        queue.push(root);
        int level = 1, tmp = level;
        int count = 1;

        while (!queue.empty()) {
            for (int i = 0; i < level; i++) {
                auto node = queue.front();
                queue.pop();
                if (!node) {
                    tmp--;
                    continue;
                }
                if (!node->left && !node->right) return count;

                queue.push(node->left);
                queue.push(node->right);
                tmp++;
            }
            level = tmp;
            count++;
        }

        return count;

    }
};