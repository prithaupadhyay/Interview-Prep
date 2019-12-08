/*
Description: (Issue in Progress)
Author: Ishita Das

Approach: (Issue in Progress)
*/

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int i =0;i<t;i++){
		    int n = sc.nextInt();
		    //sc.nextLine();
		    int arr[] = new int[n];
		    int count =0;
		    for(int j =0;j<n;j++){
		        arr[j] = sc.nextInt();
		    }
		    for(int k=n-1;k>=0;k--){
		        if (arr[k] ==0)
		            count++;
		    }
		    System.out.println(count);
		}
	}
}