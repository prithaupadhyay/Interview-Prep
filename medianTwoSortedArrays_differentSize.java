/*
There are two sorted arrays nums1 and nums2 of size m and n respectively.

Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n))

Author: Pritha Upadhyay

Approach: 
If we understand the use of median for dividing, we are very close to the answer.
First let's cut A into two parts at a random position i. Since A has m elements, so there are m+1 kinds of cutting (i=0∼m). With the same way, cut B into two parts at a random position j.
Put left_A and left_B into one set, and put right_A and right_B into another set. Let's name them left_part and right_part.
If we can ensure:
        len(left_part)=len(right_part)
        max⁡(left_part)≤min⁡(right_part)

then we divide all elements in {A,B} into two parts with equal length, and one part is always greater than the other. Then

median=max(left_part)+min(right_part)2 ​


*/
class Solution {
    public double findMedianSortedArrays(int[] A, int[] B) {
        int m = A.length;
        int n = B.length;

        if (m > n) 
        { // to ensure m<=n
            int[] temp = A; A = B; B = temp;
            int tmp = m; m = n; n = tmp;
        }

        int iMin = 0, iMax = m, halfLen = (m + n + 1) / 2;
        while (iMin <= iMax) 
        {
            int i = (iMin + iMax) / 2;
            int j = halfLen - i;
            if (i < iMax && B[j-1] > A[i])
            {
                iMin = i + 1; // i is too small
            }
            else if (i > iMin && A[i-1] > B[j]) 
            {
                iMax = i - 1; // i is too big
            }
            else 
            { // i is perfect
                int maxLeft = 0;
                if (i == 0) 
                { 
                    maxLeft = B[j-1]; 
                }
                else if (j == 0) 
                { 
                    maxLeft = A[i-1]; 
                }
                else 
                { 
                    maxLeft = Math.max(A[i-1], B[j-1]); 
                }
                if ( (m + n) % 2 == 1 ) 
                { 
                    return maxLeft; 
                }

                int minRight = 0;
                if (i == m) 
                { 
                    minRight = B[j]; 
                }
                else if (j == n) 
                { 
                    minRight = A[i]; 
                }
                else 
                { 
                    minRight = Math.min(B[j], A[i]); 
                }

                return (maxLeft + minRight) / 2.0;
            }
        }
        return 0.0;
    }
}