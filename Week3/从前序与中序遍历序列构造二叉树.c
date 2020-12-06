struct TreeNode* buildTree(int* preorder, int preorderSize, int* inorder, int inorderSize){
if (preorderSize <= 0 || inorderSize <= 0) {
        return NULL;
    }
    struct TreeNode *p = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    p->val = *preorder;
    p->left = NULL;
    p->right = NULL;
    int pos = 0;
    for (pos = 0; pos < inorderSize; pos++) {
        if (inorder[pos] == *preorder)
            break;
    }
    p->left = buildTree(preorder + 1, pos, inorder, pos);
    p->right = buildTree(preorder + pos + 1, inorderSize - pos - 1, inorder + pos + 1, inorderSize - pos - 1);
    return p;
}