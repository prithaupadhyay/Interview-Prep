/*
Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

Author: Pritha Upadhyay

Approach: 
The idea is to update the value of sum every time equal to the current sum minus the current node value.
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
    bool hasPathSum(TreeNode* root, int sum) {
         if(root == NULL){
            return false;
        }
        int newsum = sum - root->val;
        if(root->left == NULL && root->right == NULL){
            return newsum == 0;
        }
        return hasPathSum(root->left, newsum) || hasPathSum(root->right, newsum);
        
    }
};