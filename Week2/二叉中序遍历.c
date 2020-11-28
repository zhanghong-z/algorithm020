int* inorderTraversal(struct TreeNode* root, int* returnSize){
   struct TreeNode **a=(struct TreeNode**)malloc(sizeof(struct TreeNode*)*1000);
   int *b=(int*)malloc(sizeof(int)*10000);
   int i=0,top=0;
   struct TreeNode *p=NULL;
   a[0]=root;
   while(top!=-1){
       while(a[top]!=NULL) a[++top]=a[top]->left;
       top--;
       if(top!=-1){
           p=a[top];
           b[i++]=p->val;
           a[top]=p->right;
       }
   }
   *returnSize=i;
   return b;
   
}