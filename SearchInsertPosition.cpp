/*
Search Insert Position Problem
Author: Pritha Upadhyay

Approach: 
Idea is to traverse over the whole array and compare each value with the target value.
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int p=-1;
        for(int i=0;i<nums.size();i++){
            if(target>nums[i]){
                p=i;
            }
            if(nums[i]==target){
                return i;
            }
        }
        return p+1;
    }
};