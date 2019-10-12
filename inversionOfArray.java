

import java.util.*;
import java.lang.*;
import java.io.*;
import java.util.Arrays;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		for(int i=0;i<t;i++){
		    int n=sc.nextInt();
		  //  int count=0;
		    int arr[]=new int[n];
		    for(int m=0;m<n;m++){
		        arr[m]=sc.nextInt();
		    }
		  
		    System.out.println(mergeSortAndCount(arr, 0, arr.length - 1));
		}
	}
	 private static long mergeAndCount(int[] arr, int l, int m, int r) 
    { 
  
        // Left subarray 
        int[] left = Arrays.copyOfRange(arr, l, m + 1); 
  
        // Right subarray 
        int[] right = Arrays.copyOfRange(arr, m + 1, r + 1); 
  
        int i = 0, j = 0, k = l;
        long swaps = 0; 
  
        while (i < left.length && j < right.length) { 
            if (left[i] <= right[j]) 
                arr[k++] = left[i++]; 
            else { 
                arr[k++] = right[j++]; 
                swaps += m - (i+l) + 1; 
            } 
        } 
  
        // Fill from the rest of the left subarray 
        while (i < left.length) 
            arr[k++] = left[i++]; 
  
        // Fill from the rest of the right subarray 
        while (j < right.length) 
            arr[k++] = right[j++]; 
  
        return swaps; 
    } 
  
    // Merge sort function 
    private static long mergeSortAndCount(int[] arr, int l, int r) 
    { 
  
        long count = 0; 
  
        if (l < r) { 
            int m = (l + r) / 2; 
   
            count += mergeSortAndCount(arr, l, m); 
  
            // Right subarray count 
            count += mergeSortAndCount(arr, m + 1, r); 
  
            // Merge count 
            count += mergeAndCount(arr, l, m, r); 
        } 
  
        return count; 
    } 
  
	
}