/*
Find two values from an array of numbers giving constant sum.
Author: Pritha Upadhyay

Approach: 
We are given an array of numbers along with a target value. Our aim is find the two values from that array which sum up to the target value. 
We first store one value to a variable p and search for (target-p) in the array list.
*/

class Solution {
public:
    int search(vector<int>& nums, int p, int x){
        int q=0;
        for(int j=0;j<nums.size();j++)
        {
            //cout<<"x:"<<x;
            //cout<<"nums["<<j<<"] = "<<nums[j];
            if(nums[j]==x && j!=p){
                q=j;
                return q;
            }
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int p,q;
        for(int i=0;i<nums.size();i++){
            int p=i;
            q=search(nums,p, (target-nums[i]));
            //cout<<"q:"<<q<<endl;
        
            
            if(q!=-1){
                result.push_back(p);
                result.push_back(q);
                return result;
            }
        }
        return result;
    }
};