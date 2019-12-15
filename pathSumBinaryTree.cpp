/*
Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

Author: Pritha Upadhyay

Approach: 
The idea is to traverse from root to all leaves in top-down fashion maintaining a path[] array to store current root to leaf path. While traversing, store data of all nodes of current path in the array path[]. Whenever a leaf node is reached, calculate the sum of all of the nodes on the current path using the array path[] and check if it is equal to the given sum.

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
    int checkTheSum(TreeNode *root, int path[], int i, int sum) 
{ 
    int sum1 = 0, x, y, j; 
      
    if(root == NULL) 
        return 0; 

    path[i] = root->val; 

    if(root->left==NULL&&root->right==NULL) 
    { 
        for(j = 0; j <= i; j++) 
            sum1 = sum1 + path[j]; 
              
        if(sum == sum1) 
            return 1; 
        else
            return 0; 
    } 
  
    x = checkTheSum(root->left, path, i+1, sum); 

    if(x==1)  
        return 1; 
    else
    { 
        return checkTheSum(root->right, path, i+1, sum); 
    } 
} 
    bool hasPathSum(TreeNode* root, int sum) {
        int path[100];
        return checkTheSum(root, path, 0, sum);
        
    }
};