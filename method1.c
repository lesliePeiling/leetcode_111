/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int minDepth(struct TreeNode* root){
    if(NULL==root) return 0;
    
    if((NULL==root->left)&&(NULL==root->right)){
        return 1;
    }
    if((root->left)&&(NULL==root->right)){
        return minDepth(root->left)+1;
    }
    if((NULL==root->left)&&(root->right)){
        return minDepth(root->right)+1;
    }
    //if((root->left)&&(=root->right)){}
    
    int tmpL,tmpR;
    tmpL=minDepth(root->left);
    tmpR=minDepth(root->right);
    
    return (tmpL<tmpR?tmpL:tmpR)+1;
}

