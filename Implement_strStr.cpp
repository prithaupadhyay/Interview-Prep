/*
Implement strStr() in cpp Problem
Author: Pritha Upadhyay

Example 1:
Input: haystack = "hello", needle = "ll"
Output: 2

Example 2:
Input: haystack = "aaaaa", needle = "bba"
Output: -1

Approach: 
Here the idea is to fix a range for search. We fixed the range value as length of the needle. Now we start the traversal keeping one pointer at  and the other at this length n2. Everytime we'll match it with the needle and if any of the character doesn't match, it will return false.
If the substring matches with the needle, it will return the initial pointer which means the starting point.
*/

class Solution {
public:
    bool matchSubstring(int i, int j, string base, string word){
        for(int k=0;k<word.length();k++){
            //cout<<base<<" "<<word<<endl;
            if(base[i]!=word[k]){
                return false;
            }
            i++;
        }
        return true;
    }
    int strStr(string haystack, string needle) {
        int n1=haystack.length();
        int n2=needle.length();
        
        if(n1==0&&n2==0){
            return 0;
        }
        if(haystack==needle){
            return 0;
        }
        for(int i=0,j=n2;j<=n1;i++,j++){
            //cout<<"n1:"<<n1<<" n2:"<<n2<<endl;
            //cout<<"i:"<<i<<" j:"<<j<<endl;
            if(matchSubstring(i,j, haystack,needle)){
                //cout<<"fsvgs";
                return i;
            }
        }
        return -1;
        
    }
};