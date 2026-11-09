class Solution {
public:
    int ans = INT_MIN;

    int maxPathSum(TreeNode* root) {
        maxGain(root);
        return ans;
    }

    int maxGain(TreeNode* root) {
        if (root == NULL)
            return 0;
        // Maximum contribution from left and right
        int left = max(0, maxGain(root->left));
        int right = max(0, maxGain(root->right));

        // Path passing through current node
        ans = max(ans, root->val + left + right);

        // Return maximum one-sided path
        return root->val + max(left, right);
    }
};