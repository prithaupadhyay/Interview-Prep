/*
Description: (Issue in Progress)
Author: Ishita Das

Approach: (Issue in Progress)
*/

import java.io.*;
import java.util.*;

class GFG {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System. in);
		int t = sc.nextInt();
		sc.nextLine();
		while(t>0){
		    int n = sc.nextInt();
		    sc.nextLine();
		    int[][] a= new int[n][n];
		    for(int i =0;i<n;i++){
		        for(int j=0;j<n;j++){
		            a[i][j]=sc.nextInt();
		        }
		    }
		    StringBuffer sb = new StringBuffer();
		    
		    /*traverse each row of matrix in reverse order 
		      and store in stringbuffer*/
		    for(int i =n-1;i>=0;i--){
		        for(int j=0;j<n;j++){
		            sb.append(a[j][i]+" ");
		        }
		    }
		    System.out.println(sb);
		    t--;
		}
	}
	
	
}
