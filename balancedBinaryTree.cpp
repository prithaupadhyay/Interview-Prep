/*
Given a binary tree, determine if it is height-balanced.
For this problem, a height-balanced binary tree is defined as:
A binary tree in which the left and right subtrees of every node differ in height by no more than 1

Author: Pritha Upadhyay

Approach: 
Idea is to use a recursive approach. We need to check if both the left sub-tree and right sub-tree are balanced. To get the height, we find the max of left and right height. And finally, if the difference of the left height and right height is greater than 2, then it is not balanced. Else, if the difference is less than 2 and both the left and right subtree are balanced, then only the binary tree is balanced.
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
    bool isBalancedUtil(TreeNode* root, int* height){
        int lh = 0, rh = 0;
        int l = 0, r = 0; 
  
        if (root == NULL) { 
            *height = 0; 
            return 1; 
        }
        
        l = isBalancedUtil(root->left, &lh); 
        r = isBalancedUtil(root->right, &rh); 
        
        *height = (lh > rh ? lh : rh) + 1; 
        
        if ((lh - rh >= 2) || (rh - lh >= 2)) 
            return 0;
        else
            return l && r; 
  
    }
    
    bool isBalanced(TreeNode* root) {
        int height=0;
       return isBalancedUtil(root, &height); 
    }
};