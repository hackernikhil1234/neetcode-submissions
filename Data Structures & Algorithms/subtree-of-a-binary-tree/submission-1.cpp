class Solution {
public:

    // Function to check if two trees are identical
    bool isSameTree(TreeNode* root, TreeNode* subRoot) {

        // Both NULL
        if(root == nullptr && subRoot == nullptr)
            return true;

        // One NULL and other not
        if(root == nullptr || subRoot == nullptr)
            return false;

        // Check current node value + left subtree + right subtree
        return (root->val == subRoot->val) &&
               isSameTree(root->left, subRoot->left) &&
               isSameTree(root->right, subRoot->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        // Main tree ended
        if(root == NULL)
            return false;

        // Check if subtree starts from current node
        if(isSameTree(root, subRoot))
            return true;

        // Otherwise search left or right
        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};