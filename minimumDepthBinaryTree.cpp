/*
Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

Author: Pritha Upadhyay

Approach: 
Idea is to use a recursive approach. There can be 5 cases:
- when root is null, then minimum depth is 0;
- when root exists but do not have left and right sub tree. Then, height is 1;
- when left subtree does not exist. In that case we do recursive call for the right subtree;
- when right ubtree does not exist. In that case we do recursive call for the left subtree;
- when both subtrees exist then we do recursive call to find minimum of the minumum depth in case of left subtree and the right subtree.
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        if(root->left==NULL && root->right==NULL){
            return 1;
        }
        
        if(!root->left){
            return minDepth(root->right)+1;
        }
        
        if(!root->right){
            return minDepth(root->left)+1;
        }
        
        return min(minDepth(root->left), minDepth(root->right))+1;
    }
};