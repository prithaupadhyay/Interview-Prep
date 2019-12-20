/*
Given a string containing of ‘0’, ‘1’ and ‘?’ wildcard characters, generate all binary strings that can be formed by replacing each wildcard character by ‘0’ or ‘1’.

Author: Pritha Upadhyay

Example:
Input str = "1??0?101"
Output: 
        10000101
        10001101
        10100101
        10101101
        11000101
        11001101
        11100101
        11101101

Approach: 
We pass index of next character to the recursive function. If the current character is a wildcard character ‘?’, we replace it by ‘0’ or ‘1’ and recurse for remaining characters. We print the string if we reaches its end. 
*/

#include <iostream> 
using namespace std; 

void print(string str, int index) 
{ 
    if (index == str.size()) 
    { 
        cout << str << endl; 
        return; 
    } 
  
    if (str[index] == '?') 
    { 
        // replace '?' by '0' and recurse 
        str[index] = '0'; 
        print(str, index + 1); 
  
        // replace '?' by '1' and recurse 
        str[index] = '1'; 
        print(str, index + 1); 
    } 
    else
        print(str, index + 1); 
} 
 
int main() 
{ 
    string str = "1??0?101"; 
  
    print(str, 0); 
  
    return 0; 
} 