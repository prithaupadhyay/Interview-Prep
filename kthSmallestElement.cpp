/*
Kth Smallest Element of an Unsorted Array.
Author: Pritha Upadhyay

Approach: 
Here I have applied the naive approach by simply sorting the array and then finding the desired element.
Important thing to notice here is the use of sort() function from algorithm header file which helps to find the solution in expected time.

*/

#include<iostream>
#include<algorithm>

using namespace std;

int main()
 {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int k;
	    cin>>k;
	    
        //sorting(a,n,k);
	    sort(a,a+n);
	    
	    cout<<a[k-1]<<endl;
	    
	}
	return 0;
}

// We could have used this sorting algorithm but this will give time out. So, in cpp, better to use sort() function from algorithm header file It uses merge sort which works in good time.

// void sorting(int a[], int n, int k){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(a[i]>a[j]){
//                 int temp = a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     }

//     cout<<a[k-1]<<endl;
// }