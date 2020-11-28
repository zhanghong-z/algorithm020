void preorder(struct TreeNode* root, int* ret, int* returnSize)
{
    if (root) {
        ret[(*returnSize)++] = root->val;
        preorder(root->left, ret, returnSize);
        preorder(root->right, ret, returnSize);
    }
}

int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
    *returnSize = 0;
    int* ret = (int*)malloc(100 * sizeof(int));
    preorder(root, ret, returnSize);
    return ret;
}