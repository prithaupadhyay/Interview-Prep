/*
Given an array nums and a value val, remove all instances of that value in-place and return the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Author: Pritha Upadhyay
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    int begin=0;
    for(int i=0;i<nums.size();i++) if(nums[i]!=val) nums[begin++]=nums[i];
    return begin;
    }
};