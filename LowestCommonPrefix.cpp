/*
Lowest Common Prefix
Author: Pritha Upadhyay

Example:
Input: ["flower","flow","flight"]
Output: "fl"

Approach: 
Idea is to find the lowest common prefix of a pair and then find the LCP of this result with the next string. We one by one calculate the LCP of each of the given string with the LCP so far. The final result will be our longest common prefix of all the strings.
*/

class Solution {
public:
    string commonPrefixUtil(string str1, string str2) 
    { 
    string result; 
    int n1 = str1.length();
    int n2 = str2.length(); 
  
    for (int i=0, j=0; i<=n1-1&&j<=n2-1; i++,j++) 
    { 
        if (str1[i] != str2[j]) 
            break; 
        result.push_back(str1[i]); 
    } 
  
    return (result); 
    } 
    
    string longestCommonPrefix(vector<string>& strs) {
         int n = strs.size();
        if(n==0){
            return "";
        }
        
         string prefix =  strs[0]; 
  
         for (int i=1; i<=n-1; i++) 
            prefix = commonPrefixUtil(prefix, strs[i]); 
  
         return (prefix); 
    }
};