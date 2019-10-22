/*
Trapping Rain Problem
Author: Pritha Upadhyay

Approach: 
Here we wanted to find out the amount of water that can be filled in this structure given the height of each block piller.
To improve the space complexity from the efficient approach, rather than storing the maximum values in array, we can use just 2 variables.
Space Complexity : O(1) 

*/

#include<iostream> 
using namespace std; 

int findWater(int a[], int n) 
{ 
	int result = 0; 
	int leftMax = 0, rightMax = 0; 
	
	int lo = 0, hi = n-1; 
	
	while(lo <= hi) 
	{ 
		if(a[lo] < a[hi]) 
		{ 
			if(a[lo] > leftMax) 

			leftMax = a[lo]; 
			else
			result += leftMax - a[lo]; 
			lo++; 
		} 
		else
		{ 
			if(a[hi] > rightMax) 
			rightMax = a[hi]; 
			else
			result += rightMax - a[hi]; 
			hi--; 
		} 
	} 
	
	return result; 
} 

int main() 
{ 
    int n;
    cin>>n;
    int a[n];
    for(int i=0l i<n;i++){
        cin>>a[i];
    }

	cout << "Maximum water that can be accumulated is "
		<< findWater(arr, n); 
} 
