/*
Implement int sqrt(int x).

Compute and return the square root of x, where x is guaranteed to be a non-negative integer.

Since the return type is an integer, the decimal digits are truncated and only the integer part of the result is returned.

Author: Pritha Upadhyay

Approach: 
We keep on calculating a mid element until low is less than high. There can be 3 cases for this mid element:
- If this mid element is the required square root then directly return the element;
- If the square of this mid element is greater than our element x whih means that when our selected mid element is greater than the required square root then update high to be just before mid. This means that we are now considering the left half of this number in number line.
- Last case when square of this mid element is less than our element x then we update the low value to be just next to the mid value. That means we are considering the right half of this number in number line.
*/
class Solution {
public:
    int mySqrt(int x) {
    long long low = 0;
	long long high = x;

	while (low < high)
	{
		long long mid = (high - low) / 2 + low;

		if (mid * mid == x)
			return mid;
		else if (mid * mid > x)
			high = mid - 1;
		else
			low = mid + 1;
	}

	return low * low > x ? low - 1 : low;
    }
};