/*
Maximum Depth of Binary Tree
Given a binary tree, find its maximum depth.
The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node

Author: Pritha Upadhyay

Approach: 
The idea is use a recursive approach. We recursively find the left and the right depth and then check which depth is greater. 
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
    int maxDepth(TreeNode* root) {
        if (root == NULL)  
            return 0;  
        else
        {  
            /* compute the depth of each subtree */
            int lDepth = maxDepth(root->left);  
            int rDepth = maxDepth(root->right);  
      
            /* use the larger one */
            if (lDepth > rDepth)  
                return(lDepth + 1);  
            else return(rDepth + 1);
        }
    }
};