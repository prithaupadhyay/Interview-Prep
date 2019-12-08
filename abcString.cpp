/* 
Given a length n. Count the number of strings of length n that can be made using ‘a’, ‘b’ and ‘c’ with at-most one ‘b’ and two ‘c’s allowed.

Author: Mohak Khare

Approach:

 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin >> t;
	while (t--){
	    long long int n;
	    cin >> n;
	    long long int ans = (1 + 2*n + (pow(n, 3)-n)/2);
	    cout <<  ans << endl;
	}
	return 0;
}