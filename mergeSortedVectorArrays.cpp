/*
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

Note:
-The number of elements initialized in nums1 and nums2 are m and n respectively.
-You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.

Author: Pritha Upadhyay

Approach: 
The idea is to first create a separate vector and merge the two vectors while sorting. Now, clear all the elements of nums1 and then push all the elements from the new vector to this nums1.
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        int i=0;
        int j=0;
        vector<int> result;
        cout<<nums1[i];
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                result.push_back(nums1[i]);
                i++;
            }
            if(nums1[i]>nums2[j]){
                result.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){
            result.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            result.push_back(nums2[j]);
            j++;
        }
        cout<<m;
        // for(int p=0;p<nums1.size();p++){
        //     nums1.pop_back();
        // }
        nums1.clear();
        
        for(int q=0;q<result.size();q++){
            nums1.push_back(result[q]);
        }
    }
};