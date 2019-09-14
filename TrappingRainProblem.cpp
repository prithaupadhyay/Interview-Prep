/*
Trapping Rain Problem
Author: Pritha Upadhyay

Approach: 
Here we wanted to find out the amount of water that can be filled in this structure given the height of each block piller.
We created two arrays, left and right to store the maximum height in left and in right.

*/

#include<iostream>
using namespace std;

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	   
	    int left[n]; 
        int right[n]; 
  
        int total = 0; 
  
        left[0] = a[0]; 
        for (int i = 1; i < n; i++) 
            left[i] = max(left[i-1], a[i]); 
  
        right[n-1] = a[n-1]; 
        for (int i = n-2; i >= 0; i--) 
            right[i] = max(right[i+1], a[i]); 
  
        for (int i = 0; i < n; i++) 
            total += min(left[i],right[i]) - a[i]; 
  
	   cout<<total<<endl;
	   
	}
	return 0;
}