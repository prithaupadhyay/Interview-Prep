/*
Sum of bit differences among all pairs
Author: Pritha Upadhyay

Example:
Input:  arr[] = {1, 3, 5}
Output: 8
All pairs in array are (1, 1), (1, 3), (1, 5)
                       (3, 1), (3, 3) (3, 5),
                       (5, 1), (5, 3), (5, 5)
Sum of bit differences =  0 + 1 + 1 +
                          1 + 0 + 2 +
                          1 + 2 + 0 
                       = 8

Approach: 
A Simple Solution is to run two loops to consider all pairs one by one. For every pair, count bit differences. Finally return sum of counts. Time complexity of this solution is O(n2). An Efficient Solution can solve this problem in O(n) time using the fact that all numbers are represented using 32 bits (or some fixed number of bits). The idea is to count differences at individual bit positions. We traverse from 0 to 31 and count numbers with i’th bit set. Let this count be ‘count’. There would be “n-count” numbers with i’th bit not set. So count of differences at i’th bit would be “count * (n-count) * 2”.
*/

#include <bits/stdc++.h> 
using namespace std; 
  
int sumBitDifferences(int arr[], int n) 
{ 
    int ans = 0; 
    for (int i = 0; i < 32; i++) 
    { 
        int count = 0; 
        for (int j = 0; j < n; j++) 
            if ( (arr[j] & (1 << i)) ) 
                count++; 
  
        ans += (count * (n - count) * 2); 
    } 
  
    return ans; 
} 
  
int main() 
{ 
    int arr[] = {1, 3, 5}; 
    int n = sizeof arr / sizeof arr[0]; 
    cout << sumBitDifferences(arr, n) << endl; 
    return 0; 
} 