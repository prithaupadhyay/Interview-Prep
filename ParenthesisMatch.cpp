/*
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:
- Open brackets must be closed by the same type of brackets.
- Open brackets must be closed in the correct order.

Author: Pritha Upadhyay

Approach: 
Idea is to use stacks and match the opening backets with the closing brackets.
*/
class Solution {
public:
    bool isValid(string s) {
        stack <char> str;
        char p;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                str.push(s[i]);
                continue;
            }
            if(str.empty()){
                return false;
            }
            
            switch(s[i]){
                case ')':
                    p=str.top();
                    str.pop();
                    if(p!='('){
                        return false;
                    }
                    break;
                case ']':
                    p=str.top();
                    str.pop();
                    if(p!='['){
                        return false;
                    }
                    break;
                case '}':
                    p=str.top();
                    str.pop();
                    if(p!='{'){
                        return false;
                    }
                    break;
            }
            
        }
     return str.empty();   
    }
};