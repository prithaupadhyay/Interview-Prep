/*
Coin Change Problem
Author: Mohak Khare

*/
#include <bits/stdc++.h>
using namespace std;
long long int tab(long long int n, long long int m, long long int a[]){
    long long int sol[m+1][n+1];
    
    if (n == 0)
    return 1;
    
    if (n<0)
    return 0;
    
    if (m <=0 && n>0)
    return 0;
    
    for (int i=0; i<1; i++){
        for (int j=0; j<n+1; j++){
            sol[i][j] = 0;
        }
    }
    
    for (int i=0; i<m+1; i++){
        for (int j=0; j<1; j++){
            sol[i][j] = 1;
        }
    }
    
    for (int i=1; i<m+1; i++){
        for (int j=1; j<n+1; j++){
            if (j-a[i-1] >= 0)
            sol[i][j] = sol[i-1][j] + sol[i][j-a[i-1]];
            
            else
            sol[i][j] = sol[i-1][j];
        }
    }
    return sol[m][n];
    
}
int main() {
	long long int t;
	cin >> t;
	while (t--){
	    long long int m;
	     cin >> m;
	     long long int a[m];
	     for (int i=0; i<m; i++)
	     cin >> a[i];
	     
	     long long int n;
	     cin >> n;
	     
	     cout << tab(n, m, a) << endl;
	}
	return 0;
}