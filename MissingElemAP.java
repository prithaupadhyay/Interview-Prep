import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int i=0;i<t;i++){
		    int n=sc.nextInt();
		    int arr[]=new int[n];
		    
		    for(int j=0;j<n;j++){
		        arr[j] = sc.nextInt();
		    }
		    int d = (arr[n-1]-arr[0])/n;
		    for(int k=0;k<n-1;k++){
		       if(arr[k+1]-arr[k]!=d){
		           System.out.println(arr[k]+d);
		       } 
		        
		    }
		}
		
	}
}