/* 
    Given an array A[ ] denoting the time taken to complete N tasks, 
    determine the minimum amount of time required to finish the tasks
    considering that you can skip any task, 
    but skipping two consecutive tasks is forbidden.

    Expected Time Complexity: O(n)
    Expected Space Complexity: O(1)

        */
#include <iostream>
using namespace std;
int task(int a[], int n){
    if (n <= 0)
    return 0;
    
    int in = a[0];
    int ex = 0;
    
    for (int i=1; i<n; i++){
        int in_new = a[i] + min(in, ex);
        int ex_new = in;
        in = in_new;
        ex = ex_new;
    }
    return min(in, ex);
}
int main() {
	int t;
	cin >> t;
	while (t--){
	    int n;
	    cin >> n;
	    int a[n], sum = 0;
	    for (int i=0; i<n; i++){
	    cin >> a[i];
	    sum = sum + a[i];
	    }
	    
	    cout << task(a, n) << endl;
	}
	return 0;
}