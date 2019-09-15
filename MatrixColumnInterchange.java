/*
Matrix Column Interchange Problem
Author: Pritha Upadhyay

Approach: 
Here the aim was to interchange the first and last column. So, basically we want to swap the first and last element for every row.
*/

import java.io.*;
import java.util.*;

class MatrixColumnInterchange {
    
    // Driver code
	public static void main (String[] args) {
	    
	    // Taking input using scanner class
		Scanner sc = new Scanner(System.in);
		
		int testcase = sc.nextInt();
		
		while(testcase-- > 0){
		    int rows = sc.nextInt();
            int cols = sc.nextInt();
		    int a[][] = new int[rows][cols];
		    
		    for(int i = 0;i<rows;i++){
		        for(int j = 0;j<cols;j++){
		            a[i][j] = sc.nextInt();
		        }
		    }
		    
		    Geeks obj = new Geeks();
		    obj.interchange(a, rows, cols);
		}
	}
}

class Geeks{
    
    static void interchange(int a[][],int r, int c){
        
    for(int i=0;i<r;i++)
    {
        int temp = a[i][0];
        a[i][0]=a[i][c-1];
        a[i][c-1]=temp;
    }
    
     
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                System.out.print(a[i][j] + " ");
            }
            System.out.println();
        } 
    }
}