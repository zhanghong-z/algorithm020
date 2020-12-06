struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if (NULL == root || root == p || root == q)
        return root;

    struct TreeNode *left = lowestCommonAncestor(root->left, p, q);
    struct TreeNode *right = lowestCommonAncestor(root->right, p, q);

    if (NULL != left && NULL != right)
        return root;

    return NULL == left ? right : left;
}