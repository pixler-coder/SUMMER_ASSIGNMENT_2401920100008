class Codec {
private:
    void serializeHelper(TreeNode* root, stringstream& ss) {
        if (!root) {
            ss << "#,";
            return;
        }
        ss << root->val << ",";
        serializeHelper(root->left, ss);
        serializeHelper(root->right, ss);
    }

    TreeNode* deserializeHelper(stringstream& ss) {
        string val;
        if (!getline(ss, val, ',')) {
            return nullptr;
        }
        if (val == "#") {
            return nullptr;
        }
        TreeNode* root = new TreeNode(stoi(val));
        root->left = deserializeHelper(ss);
        root->right = deserializeHelper(ss);
        return root;
    }

public:
    string serialize(TreeNode* root) {
        stringstream ss;
        serializeHelper(root, ss);
        return ss.str();
    }

    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return deserializeHelper(ss);
    }
};