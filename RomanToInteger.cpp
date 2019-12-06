/*
Roman To Integer
Author: Pritha Upadhyay

Example:
Input: "III"
Output: 3

Input: "IV"
Output: 4

Approach: 
Idea is to split the Roman Numeral string into Roman Symbols (character).We will convert each symbol of Roman Numerals into the value it represents.Then we take symbol one by one from starting from index 0:
    -If current value of symbol is greater than or equal to the value of next symbol, then add this value to the running total.
    -else subtract this value by adding the value of next symbol to the running total.

*/

class Solution {
public:
    int value(char r) 
    { 
    if (r == 'I') 
        return 1; 
    if (r == 'V') 
        return 5; 
    if (r == 'X') 
        return 10; 
    if (r == 'L') 
        return 50; 
    if (r == 'C') 
        return 100; 
    if (r == 'D') 
        return 500; 
    if (r == 'M') 
        return 1000; 
  
    return -1; 
    } 
    
    int romanToInt(string s) {
        
        int res=0;
        
        for(int i=0;i<s.length();i++){
            int s1=value(s[i]);
            
            if(i+1<s.length()){
                int s2=value(s[i+1]);
                
                if(s1>=s2){
                    res=res+s1;
                }
                else{
                    res=res+s2-s1;
                    i++;
                }
                
            }
            else{
                res=res+s1;
            }
        }
        
        return res;
        
    }
};