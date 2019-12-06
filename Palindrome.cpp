/*
Palindrome Number
Author: Pritha Upadhyay

Example:
Input: 121
Output: true

Input: -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Approach: 
Idea is to first check if the input number is negative or not. If it is negative then there is no need to check further as any negative number can never be a palindrome. For non-negative numbers, calculate the reverse of the number and then compare the number with its reverse.
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        
        long rev=0;
        long p;
        p=x;
        //cout<<"x:"<<x;
        //cout<<"p:"<<p;
        while(p!=0){
            long remain = p%10;
            p=p/10;
            
            rev=rev*10+remain;
        }
        //cout<<"rev:"<<rev;
        
        if(x==rev){
            return true;
        }
        else{
            return false;
        }
        
    }
};