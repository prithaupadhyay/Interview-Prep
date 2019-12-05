/*
Given a 32-bit signed integer, reverse digits of an integer.
Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

Author: Pritha Upadhyay

Approach: 
Reversing an integer can be done similarly to reversing a string. However, this approach is dangerous, because the statement temp=rev⋅10+pop can cause overflow.
Luckily, it is easy to check beforehand whether or this statement would cause an overflow.
For the upper end, we check if the rev is greater than INT_MAX/10 or if it is less than this max and remainder is greater than 7, then also, it should return 0. Similar case for the lower bound.
*/

class Solution {
public:
   int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int remain = x % 10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && remain > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && remain < -8)) return 0;
            rev = rev * 10 + remain;
        }
        return rev;
    }
};