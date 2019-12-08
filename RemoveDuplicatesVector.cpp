/*
Given a sorted array nums, remove the duplicates in-place such that each element appear only once and return the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

Author: Pritha Upadhyay

Approach: 
Simple idea is to iterate the vector and for each element, we delete all its duplicate from the vector if present. We can either write our own routine for this or use the algorithm that makes our code elegant. This approach takes constant space but runs in O(n^2) time.
*/
class Solution {
public:

    int removeDuplicates(vector<int>& nums) {
        auto end = nums.end();
        for(auto it=nums.begin(); it!=end; ++it){
            end = remove(it+1,end,*it);
        }
        nums.erase(end,nums.end());
        
        return nums.size();
    }
};