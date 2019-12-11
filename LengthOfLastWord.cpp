/*
Length of the last word Problem

Author: Pritha Upadhyay

Approach: 
Idea is to begin the traversal from the end of the string. As soon as we find a space, we need to stop counting. For considering the edge cases when the last character is space, we need to first move the i pointer to the last non space character.
*/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        if(n==0){
            return 0;
        }
        int i=n-1;
        int count=0;
        cout<<n;
        if(s[n-1]==' '){
            //cout<<"fj";
            while(s[i]==' '){
                i--;
            }
        }
        while(s[i]!=' '&&i>=0){
            //cout<<s[i];
            i--;
            count++;
        }
        return count;
    }
};