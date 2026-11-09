class Codec {
public:

    // Convert tree into string
    string serialize(TreeNode* root) {
        if (root == NULL)
            return "N,";

        string result = to_string(root->val) + ",";

        result += serialize(root->left);
        result += serialize(root->right);

        return result;
    }

    // Convert string back into tree
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return buildTree(ss);
    }

    TreeNode* buildTree(stringstream& ss) {
        string val;

        getline(ss, val, ',');

        if (val == "N")
            return NULL;

        TreeNode* root = new TreeNode(stoi(val));

        root->left = buildTree(ss);
        root->right = buildTree(ss);

        return root;
    }
};