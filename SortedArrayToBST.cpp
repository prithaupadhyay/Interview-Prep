/*
Convert Sorted Array to Binary Search Tree

Given an array where elements are sorted in ascending order, convert it to a height balanced BST.
For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1

Author: Pritha Upadhyay

Approach: 
The idea is use a recursive approach. We recursively find the mid element of the array and make it the root. We will continue this for the left subtree and the right subtree. 
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
    TreeNode* newNode(int data){
        TreeNode* node=new TreeNode(data);
        return node;
    }
    TreeNode* generateBST(vector<int>& nums, int start, int end){
        if(start>end){
            return NULL;
        }
        
        int mid=(start+end)/2;
        TreeNode* root=newNode(nums[mid]);
        
        root->left=generateBST(nums,start,mid-1);
        
        root->right=generateBST(nums, mid+1, end);
        
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return generateBST(nums,0,nums.size()-1);
    }
};