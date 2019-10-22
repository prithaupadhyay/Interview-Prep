/*
Subset Sum Problem
Author: Ishita Das
*/

import java.lang.*;
import java.io.*;
import java.util.*;

class SubsetSum {
	public static void main (String[] args) {
		//code
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		while(t-- > 0){
		    int n = in.nextInt();
		    int arr[] = new int[n];
		    int i = 0;
		    while(i < n){
		        arr[i++] = in.nextInt();
		    }

		    if(partition(arr, n))
		        System.out.println("YES");
		    else
		        System.out.println("NO");
		}
	}

	static boolean partition(int[] arr, int n){
	    int sum = 0;
	    for(int i = 0; i < n; i++)
	        sum+=arr[i];

	    if(sum%2 == 1)
	        return false;

	    return subset(arr, n, sum/2);
	}

	static boolean subset(int[] arr, int n, int sum){
	    boolean part[][] = new boolean[sum+1][n + 1];

	    for(int i = 0; i <= n; i++)
	        part[0][i] = true;

	    for(int i = 1; i <= sum; i++)
	        part[i][0] = false;

	    for(int i = 1; i <= sum; i++){
	        for(int j = 1; j <= n; j++){
	            part[i][j] = part[i][j-1];
	            if(arr[j-1] <= i)
	                part[i][j] = part[i][j] || part[i-arr[j-1]][j-1];
	        }
	    }

	    return part[sum][n];
	}
}