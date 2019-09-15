/*
Predict Column with Maximum Zeroes Problem
Author: Pritha Upadhyay

Approach: 
Here the aim was to find the column with maximum number of zeroes.
So, we first created an array count of size n to store the number of zeroes in each column. The final step is to find the maximum value and return its index.
*/

import java.io.*;
import java.util.*;
   
    class columnMaxZeroes {
    
        public static void main (String[] args) {
        
            Scanner sc = new Scanner(System.in);
            int testcase = sc.nextInt();
            
            while(testcase-- > 0){
                int n = sc.nextInt();
                int a[][] = new int[n][n];
                
                for(int i = 0;i<n;i++){
                    for(int j = 0;j<n;j++){
                        a[i][j] = sc.nextInt();
                    }
                }
                
                Geeks obj = new Geeks();
                System.out.println(obj.columnWithMaxZero(a, n));
            }
        }
    }

    class Geeks{
        
        static int columnWithMaxZero(int a[][],int n){
            
           int[] count = new int[n];
           
           for(int i=0;i<n;i++)
           {
               count[i]=0;
           }
           
           for(int j=0;j<n;j++)
           {
               for(int i=0;i<n;i++)
               {
                   if(a[i][j]==0)
                        count[j]++;
               }
           }
           
           int max=-1;
           int ind=0;
           int k;
            for(k=0;k<n;k++)
           {
               if(count[k]>max)
               {
                    max=count[k];
                    ind=k;
               }
           }
           
           return ind;
            
        }
    }